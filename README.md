# Ainda em Trânsito — PS Vita

Port nativo em C++/SDL2 para PS Vita.

## Como gerar o VPK sem instalar nada no PC

1. Envie **todo o conteúdo desta pasta** para a raiz do repositório `ainda-em-transito-vita` no GitHub.
2. Ao terminar o upload, o GitHub Actions inicia sozinho.
3. Abra a aba **Actions** do repositório.
4. Abra a execução **Build PS Vita VPK**.
5. Espere ficar verde.
6. Na parte **Artifacts**, baixe `Ainda-em-Transito-PS-Vita`.
7. Dentro do ZIP do artifact estará `Ainda_em_Transito.vpk`.

Também é possível iniciar manualmente em **Actions → Build PS Vita VPK → Run workflow**.

A compilação usa a imagem oficial `vitasdk/vitasdk:2026.08`; não precisa Docker, WSL ou VitaSDK no seu computador.
