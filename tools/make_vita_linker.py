#!/usr/bin/env python3
import re
import subprocess
import sys
from pathlib import Path

out = Path(sys.argv[1] if len(sys.argv) > 1 else "vita_padded.ld")

proc = subprocess.run(
    ["arm-vita-eabi-ld", "--verbose"],
    text=True,
    stdout=subprocess.PIPE,
    stderr=subprocess.STDOUT,
    check=True,
)
text = proc.stdout

# GNU ld imprime o script padrão entre duas linhas de "====".
parts = re.split(r"^=+\s*$", text, flags=re.MULTILINE)
if len(parts) < 3:
    raise SystemExit("Nao consegui extrair o linker script padrao do VitaSDK.")

script = parts[1].strip() + "\n"

padding = """
  /* Extra gap for vita-elf-create SCE module metadata. */
  . = ALIGN(0x10000);
  . += 0x10000;
"""

# O ponto mais seguro é logo após DATA_SEGMENT_ALIGN, que marca a transição
# para a área de dados gravável no script padrão do GNU ld.
m = re.search(r"(\.\s*=\s*DATA_SEGMENT_ALIGN\s*\([^;]+;)", script)
if m:
    script = script[:m.end()] + padding + script[m.end():]
else:
    # Fallback: insere imediatamente antes da primeira seção .data.
    m = re.search(r"(?m)^\s*\.data\b", script)
    if not m:
        raise SystemExit("Nao encontrei DATA_SEGMENT_ALIGN nem .data no linker script.")
    script = script[:m.start()] + padding + script[m.start():]

out.write_text(script, encoding="utf-8")
print(f"Generated padded linker script: {out}")
