#pragma once
#include <cstddef>
struct Line { const char* speaker; const char* text; };
struct StoryRef { const char* id; const Line* lines; int count; };

static const Line story_intro[] = {
  {"narrator", "Picos. Dia 16.\nAnanda, Calisto e Apollo esperam o resto do grupo."},
  {"ananda", "oi. vocês olharam o rastreio hoje?"},
  {"apollo", "Olhei antes de vocês chegarem. Tava na mesma."},
  {"calisto", "Olha de novo."},
  {"ananda", "eu já olhei umas cinco vezes"},
  {"apollo", "Então essa é a sexta."},
  {"narrator", "O computador avisa que a encomenda foi atualizada."},
  {"ananda", "pera. atualizou mesmo?"},
  {"narrator", "Examine o computador sobre a mesa."},
};
static const Line story_tracking[] = {
  {"narrator", "REMETENTE: Aconitum / Los Angeles\nDESTINO: Picos, PI\nSITUAÇÃO: retirada disponível"},
  {"ananda", "meu deus. finalmente"},
  {"apollo", "Pera. O campo da cidade não carregou."},
  {"calisto", "Imprime esse comprovante. Tem o número do envio."},
  {"narrator", "O comprovante diz DE: ACONITUM.\nNa margem, uma linha antiga: \"em análise\"."},
  {"ananda", "até o papel veio com aviso velho"},
  {"apollo", "A atualização de hoje vale. Vamos levar os dois."},
  {"narrator", "A tela mostra uma porta com a marca da central. A mesma marca aparece na porta dos fundos."},
  {"calisto", "Isso não tava aí."},
  {"ananda", "a gente pega a caixa e volta. vem comigo"},
};
static const Line story_portal[] = {
  {"narrator", "A porta dá direto para o depósito mostrado no rastreamento."},
  {"ananda", "isso aqui não era pra dar na rua?"},
  {"apollo", "Era."},
  {"calisto", "Tem a mesma placa da tela."},
  {"ananda", "tá. a gente pega a caixa e volta. vem comigo"},
};
static const Line story_hubIntro[] = {
  {"narrator", "CENTRAL POSTAL · GUICHÊ 00\nUm aviso: \"Retirada manual durante a greve\"."},
  {"ananda", "oi. a gente veio buscar uma encomenda"},
  {"protocolo", "Ananda Canuto? O sistema acabou de abrir sua retirada."},
  {"apollo", "A cidade sumiu do rastreio. Trouxemos o número."},
  {"protocolo", "Posso localizar com ele. Mas a etiqueta foi molhada e parte do cadastro veio com o apelido."},
  {"ananda", "aposto que tá anzol"},
  {"protocolo", "Exatamente. Preciso do nome na oficina e da confirmação do remetente na estação."},
  {"calisto", "Pra garantir que a caixa vai pra pessoa certa."},
  {"protocolo", "Isso. DE identifica quem enviou. PARA, quem recebe. COM confirma o envio. Vou procurar onde guardaram."},
  {"narrator", "Um cão de fita se debate junto de um carrinho. A guia dele prendeu debaixo da roda."},
  {"ananda", "calma. a gente te solta"},
  {"apollo", "Se ele correr, puxa tudo. Um de cada lado."},
};
static const Line story_tapeIntro[] = {
  {"narrator", "O cão quer sair do corredor. Cada puxão faz outra volta da fita escapar."},
  {"ananda", "olha pra mim. não puxa"},
  {"calisto", "Achei a ponta embaixo da roda. Vou apontar quando aparecer."},
  {"apollo", "Eu seguro o rolo. Vocês vão soltando."},
  {"narrator", "Mantenha o grupo fora das fitas enquanto ajuda o cão. Os brilhos verdes podem ser recolhidos."},
};
static const Line story_tapeAfter[] = {
  {"narrator", "A fita se solta. O cão consegue sair do meio da passagem."},
  {"ananda", "pronto. agora sim"},
  {"fita", "[ele abana o rabo]"},
  {"calisto", "A oficina é ali na esquerda. A estação fica do outro lado."},
  {"apollo", "Vamos pegar os comprovantes."},
};
static const Line story_arant[] = {
  {"ananda", "oi.. ALEFI.. o-o"},
  {"arant", "eu não conheço nem um alefi eu não sei como quem você tá falano não sinceramente okei"},
  {"calisto", "É você sim."},
  {"apollo", "Tá fazendo o quê aqui?"},
  {"arant", "tentando usar aquela máquina. a tinta não tá chegando"},
  {"ananda", "tu mexeu nela?"},
  {"arant", "eehehmmm..."},
  {"ananda", "tá bom. deixa que a gente vê"},
};
static const Line story_silver[] = {
  {"silver", "ATA. noventa, vocês vieram pela encomenda também?"},
  {"ananda", "sim. falta tirar uma etiqueta ali"},
  {"silver", "Eu tentei. Saiu uma folha toda apagada."},
  {"calisto", "A tinta não tá chegando na impressora."},
  {"ananda", "eu vou tentar arrumar"},
  {"silver", "Na verdade desiste okei"},
  {"ananda", "aimds do ceu"},
  {"silver", "Eu seguro a folha. vai lá."},
};
static const Line story_noelle[] = {
  {"narrator", "Um cabide com chifres de papel está encostado na parede."},
  {"apollo", "Ananda, olha aquilo."},
  {"ananda", "AIMDS MENINO NAO FALA COM ESSA NOELLE"},
  {"calisto", "É um cabide."},
  {"ananda", "eu sei. lembrei agora"},
  {"apollo", "Eu também."},
};
static const Line story_verity[] = {
  {"narrator", "No visor, Arant deixou uma lista de palavras:\nverity / obesity / falsity / lovity / moggity / freakity / eclipsity"},
  {"ananda", "não. aqui também não"},
  {"apollo", "Eu nem falei nada."},
  {"calisto", "E nem precisa."},
  {"arant", "mas a música é boa"},
  {"ananda", "tu pode gostar em silêncio"},
};
static const Line story_pipesIntro[] = {
  {"narrator", "O reservatório está cheio. A tinta só não chega ao último tubo."},
  {"calisto", "O caminho aceso mostra até onde ela consegue passar."},
  {"ananda", "aí eu giro os pedaços que tão desligados"},
  {"apollo", "Isso. Quando chegar na impressora, dá pra refazer a etiqueta."},
  {"calisto", "A entrada é azul. A saída fica aqui embaixo, à direita."},
};
static const Line story_pipesDone[] = {
  {"narrator", "A tinta chega. A primeira etiqueta sai com o nome ANZOL."},
  {"ananda", "é Ananda Canuto. anzol é meu nome no servidor"},
  {"etiqueta", "DOIS NOMES. UMA ENCOMENDA. CÓPIA DE SEGURANÇA INICIADA."},
  {"narrator", "A impressora continua fazendo cópias da mesma etiqueta. O botão de pausa sumiu embaixo das folhas."},
  {"calisto", "Tem que mostrar o nome certo no leitor."},
  {"apollo", "Eu seguro a saída. Não deixa as folhas voltarem pra máquina."},
  {"ananda", "meu nome tem seis letras. tu consegue"},
};
static const Line story_printerAfter[] = {
  {"etiqueta", "ANANDA CANUTO. PICOS, PI.\nCADASTRO CORRIGIDO."},
  {"ananda", "isso. obrigada"},
  {"calisto", "Agora o código também tá legível."},
  {"apollo", "Guarda a etiqueta num lugar seco."},
  {"narrator", "Você recebe o selo PARA. A máquina para de fazer cópias e guarda o cadastro correto."},
};
static const Line story_emibe[] = {
  {"emibe", "AIMDSSS DO CEEEUUUU"},
  {"ananda", "oi leroy"},
  {"emibe", "vocês chegaram\neu achei que ia ficar aqui sozinho"},
  {"ananda", "tu tá esperando faz tempo?"},
  {"emibe", "sim. e a porta tava trancada quando eu cheguei"},
  {"ananda", "num quiditoooo. de novo"},
  {"emibe", "não ri"},
  {"ananda", "nem tô rindo. conseguiu entrar de boa?"},
  {"emibe", "consegui. agora falta arrumar esse sinal"},
  {"apollo", "É por aqui que fala com o Aconitum?"},
  {"emibe", "é. tô usando isso aqui enquanto tô sem celular"},
  {"calisto", "Vamos ver o que aparece no terminal."},
};
static const Line story_drones[] = {
  {"narrator", "MURDER DRONES · mensagem agendada"},
  {"drones", "vou dormir cedo hoje. amanhã tenho que estudar"},
  {"drones", "feliz aniversário ananda. depois vocês me contam como foi"},
  {"ananda", "ele já foi dormir?"},
  {"apollo", "Foi. Esses dias ele tá indo cedo mesmo."},
  {"ananda", "achei que ele ainda ia entrar no forsaken"},
  {"calisto", "Amanhã vocês jogam."},
  {"ananda", "manda obrigada pra ele. quando acordar ele vê"},
  {"narrator", "Você responde à mensagem.\nA luz da chamada continua acesa ao lado."},
};
static const Line story_bellsIntro[] = {
  {"narrator", "A linha cruza três centrais. O sinal de confirmação está voltando fora de ordem."},
  {"calisto", "Cada sino é um canal. A gente devolve a sequência do visor e ele ajusta o atraso."},
  {"emibe", "a voz dele tava chegando antes da imagem. parecia que tava me prevendo"},
  {"ananda", "tá. silêncio um pouquinho que eu vou ouvir"},
  {"narrator", "Três canais. Três testes. Os números e as cores também mostram a sequência."},
};
static const Line story_bellsDone[] = {
  {"narrator", "A chamada conecta."},
  {"emibe", "Aconitum? can you hear us?"},
  {"aconitum", "YES. I can hear you."},
  {"emibe", "finally"},
  {"ananda", "a gente tá na central. pediram uma confirmação sua"},
  {"apollo", "They need you to confirm you sent the package."},
  {"aconitum", "Uhmmmn... yes. I sent it to Picos, PI."},
  {"aconitum", "They are still checking it?"},
  {"apollo", "Yes. We are trying to pick it up."},
  {"emibe", "mano eles pedem uma coisa toda hora"},
  {"aconitum", "I hope it does not take much longer. I am so excited."},
  {"ananda", "a gente também. ninguém aguenta mais olhar o rastreio"},
  {"aconitum", "Please let me know when you get it."},
  {"calisto", "Foi. A luz ficou verde."},
  {"narrator", "REMETENTE CONFIRMADO.\nA estação imprime o selo COM."},
  {"apollo", "Agora é voltar no guichê."},
};
static const Line story_gate[] = {
  {"protocolo", "A prateleira está certa. Mas minha lista ainda diz \"aguardar análise\"."},
  {"ananda", "esse aviso de novo não"},
  {"calisto", "Olha a data. Esse papel é de antes da greve. O recibo da esteira saiu hoje."},
  {"protocolo", "Então tenho duas ordens diferentes para o mesmo envio."},
  {"apollo", "Vamos pôr na sequência: envio, confirmação, retirada."},
  {"protocolo", "O arquivo continua devolvendo as folhas antigas. Vou precisar manter o carimbo parado enquanto vocês separam."},
  {"ananda", "tu segura isso aí que a gente mostra a certa"},
  {"narrator", "A pilha se abre sobre o balcão. Faça o recibo novo chegar ao carimbo sem perder a ordem dos documentos."},
};
static const Line story_bossAfter[] = {
  {"protocolo", "Envio confirmado. Análise encerrada. Retirada autorizada. Nessa ordem."},
  {"narrator", "A lista antiga recebe uma faixa: SUBSTITUÍDA. O carimbo para."},
  {"ananda", "meu jesus cristo. agora sim"},
  {"protocolo", "Desculpem a confusão. Vou atualizar os outros pedidos antes de chamar a próxima pessoa."},
  {"calisto", "E deixa a data aparecendo."},
  {"protocolo", "Vou deixar. Feliz aniversário, Ananda."},
  {"narrator", "Ele coloca a caixa no balcão. O nome está legível e a fita continua inteira."},
};
static const Line story_parcel[] = {
  {"narrator", "A caixa está fechada. A etiqueta tem o nome de Ananda."},
  {"apollo", "Vai abrir aqui?"},
  {"ananda", "em casa. quero todo mundo junto"},
  {"calisto", "Segura por baixo."},
  {"ananda", "tô segurando"},
  {"narrator", "Você pega a encomenda.\nA caixa continua fechada."},
};
static const Line story_ending[] = {
  {"silver", "Noventa, eu falei que você conceguia."},
  {"ananda", "concegui"},
  {"calisto", "Todo mundo aqui?"},
  {"emibe", "eu tô aqui. desde antes de curitiba"},
  {"aconitum", "Uhmmmn... happy birthday, Ananda. I wish I could be there with you guys."},
  {"ananda", "thank you. a gente vai mandar a foto"},
  {"arant", "feliz aniversarity"},
  {"calisto", "Arant."},
  {"arant", "eehehmmm..."},
  {"apollo", "FELIZ ANIVERSARIOOO ANANDITYY"},
  {"ananda", "aimds brigado okei :3"},
  {"emibe", "AGORA O BOLO"},
  {"drones", "Pera. Eu pisquei."},
  {"silver", "Tira outra. Essa eu vou guardar."},
  {"narrator", "A câmera guarda os sete. Aconitum aparece na tela ao lado.\nDessa vez, ninguém ficou de fora."},
};
static const Line story_dispatchNotice[] = {
  {"protocolo", "Os três comprovantes estão certos. Agora deixa eu ver onde ficou a caixa."},
  {"ananda", "como assim onde ficou"},
  {"protocolo", "Curitiba."},
  {"ananda", "..."},
  {"ananda", "CURITIBA?"},
  {"apollo", "A gente tá em Picos."},
  {"protocolo", "A encomenda parou em Curitiba quando os Correios entraram em greve. O sistema manteve o aviso de retirada, mas a caixa não veio para Picos."},
  {"calisto", "Então o aviso não era daqui."},
  {"protocolo", "Não. A caixa está guardada. Posso liberar a passagem postal para vocês retirarem lá."},
  {"ananda", "eu saí pra pegar uma caixa. uma caixa"},
  {"apollo", "Vou avisar o Aconitum."},
  {"aconitum", "Uhmmmn... Curitiba? I sent it to Picos."},
  {"apollo", "We know. There is a postal strike. We are going to pick it up."},
  {"aconitum", "WHAT. You are going there?"},
  {"calisto", "É pela passagem da central. Não é pela estrada."},
  {"apollo", "There is a shortcut here. We can get back through the same door."},
  {"aconitum", "Okay. Stay together. And please tell me when you have it."},
  {"protocolo", "O embarque fica no pátio. Levem os comprovantes. O arquivo de Curitiba vai localizar a prateleira."},
  {"ananda", "tá. calisto vem. hoje a gente pega isso"},
};
static const Line story_courtyardIntro[] = {
  {"narrator", "Um pátio pequeno entre a oficina e as plataformas. Tem um banco, plantas e uma máquina de retratos."},
  {"ananda", "a gente podia ter sentado aqui antes"},
  {"calisto", "Ainda pode."},
  {"apollo", "Tem água perto do banco. Vamos parar um pouco."},
};
static const Line story_bench[] = {
  {"narrator", "O grupo senta por um momento. Dá para ouvir a oficina daqui."},
  {"ananda", "eu achei que a gente ia pegar a caixa em cinco minutos"},
  {"apollo", "Eu também achei."},
  {"calisto", "Pelo menos ninguém ficou em casa esperando."},
  {"ananda", "sim. imagina eu aqui sozinha tentando explicar quem é anzol"},
  {"apollo", "Você ia mandar mensagem pra gente."},
  {"ananda", "ia mandar um áudio de três minutos"},
  {"calisto", "Eu ia ouvir acelerado."},
  {"ananda", "aimds do ceu ;-;"},
  {"narrator", "A água está fresca. O grupo recupera a vida."},
};
static const Line story_silverRequest[] = {
  {"silver", "Noventa. vem ver isso."},
  {"ananda", "que foi silver"},
  {"silver", "A máquina tirou uma foto minha e imprimiu só a moldura."},
  {"ananda", "tu saiu antes de tirar a foto?"},
  {"silver", "Eu achei que já tinha tirado."},
  {"calisto", "Tem uma contagem ali."},
  {"silver", "ATA. então foi isso."},
  {"narrator", "Silver quer outra foto. Falta um vale da máquina. Talvez alguém na oficina tenha um."},
};
static const Line story_photoToken[] = {
  {"ananda", "arant. tu pegou um vale de foto aqui?"},
  {"arant", "eehehmmm..."},
  {"calisto", "Tá saindo do teu bolso."},
  {"arant", "era esse aqui? achei que era um recibo"},
  {"narrator", "Arant entrega o vale. Tem uma câmera desenhada nele."},
  {"ananda", "sim. esse recibo de foto. obrigada"},
};
static const Line story_silverPhoto[] = {
  {"silver", "Pronto. agora eu fico parado."},
  {"ananda", "silver não sai"},
  {"silver", "EU TÔ AQUI"},
  {"narrator", "Três. Dois. Um.\nDesta vez todo mundo aparece."},
  {"silver", "Noventa, guarda essa. A primeira a gente finge que não aconteceu."},
  {"ananda", "a primeira eu vou guardar também"},
  {"narrator", "Você guarda o retrato no caderno de viagem."},
};
static const Line story_train[] = {
  {"narrator", "A placa da passagem acende: CURITIBA. Uma porta de vagão aparece no fim da plataforma."},
  {"emibe", "vocês vão pra ONDE"},
  {"ananda", "curitiba. vem logo leroy"},
  {"emibe", "eu fui ali beber água e mudou o estado"},
  {"apollo", "É só passar pela porta. A volta é por aqui também."},
  {"calisto", "Tá todo mundo?"},
  {"ananda", "tá. vem"},
  {"narrator", "As portas se fecham. O barulho da central diminui. Quando abrem de novo, o ar está mais frio."},
};
static const Line story_archiveIntro[] = {
  {"narrator", "CURITIBA · ARQUIVO DE RETIRADA\nOs três comprovantes acendem no painel."},
  {"ananda", "meu deus tá frio"},
  {"emibe", "eu avisei que era pra trazer um casaco"},
  {"apollo", "Você descobriu a viagem agora."},
  {"emibe", "mas eu teria avisado"},
  {"calisto", "Aqui. Nome, origem e destino. Tem que encontrar a ficha que bate com os três."},
  {"ananda", "ananda canuto. los angeles. picos. se aparecer curitiba como destino eu vou chorar"},
};
static const Line story_archiveDone[] = {
  {"narrator", "Ficha encontrada: ANANDA CANUTO.\nOrigem: Los Angeles. Destino: Picos, PI.\nLocalização: expedição, prateleira 16."},
  {"calisto", "Dezesseis. Anotei."},
  {"ananda", "até a prateleira tá de aniversário"},
  {"apollo", "A expedição fica depois da passarela."},
  {"emibe", "tá. eu vou na frente ver se tem alguém lá"},
};
static const Line story_bridgeIntro[] = {
  {"narrator", "O carrinho de manutenção parou no trilho. Dois módulos de contato saíram do encaixe."},
  {"calisto", "Esse painel controla o carrinho. A câmera mostra as peças lá embaixo."},
  {"apollo", "Empurra os dois módulos até os encaixes dourados. Aí o corrimão libera a passagem."},
  {"ananda", "se eu prender um no canto..."},
  {"calisto", "O controle guarda os movimentos. X desfaz."},
  {"ananda", "ainda bem. tecnologia a meu favor"},
};
static const Line story_bridgeDone[] = {
  {"narrator", "Os módulos encaixam. Duas luzes se acendem do outro lado do vidro. A passagem destrava."},
  {"calisto", "As duas. Agora pode ir."},
  {"ananda", "eu sou muito da manutenção"},
  {"apollo", "Os dois contatos tão verdes."},
  {"ananda", "ainda bem. vem"},
  {"narrator", "Do outro lado, Emibê está tentando devolver uma ficha à esteira."},
};
static const Line story_sortingIntro[] = {
  {"emibe", "AIMDSSS DO CEEEUUUU ela devolveu TUDO"},
  {"ananda", "deixa eu ler"},
  {"calisto", "O sistema misturou remetente, destinatário e confirmação. Tem uma bandeja pra cada tipo."},
  {"apollo", "As fichas com nome de quem enviou vão em DE. Nome de quem recebe, PARA. Recibo confirmado, COM."},
  {"ananda", "tu tava botando tudo no mesmo?"},
  {"emibe", "sim. eu queria resolver rápido"},
  {"narrator", "Leia o conteúdo de cada ficha. Separar os três registros vai formar o pedido da prateleira 16."},
};
static const Line story_sortingDone[] = {
  {"narrator", "DE, PARA e COM se juntam num pedido único: RETIRADA 16."},
  {"carretel", "ENROLAR. PROTEGER. ENROLAR. PROTEGER."},
  {"narrator", "O sensor está tapado por uma etiqueta. O carretel acha que a caixa ainda está aberta e tenta embalá-la de novo."},
  {"ananda", "ela já tá fechada moço"},
  {"calisto", "Preciso descobrir o sensor. Segurem as duas pontas em momentos diferentes."},
  {"apollo", "Eu seguro a da direita. Nana acompanha o giro da esquerda."},
  {"emibe", "eu fico aqui. longe da fita"},
};
static const Line story_carretelAfter[] = {
  {"narrator", "Calisto limpa o sensor. O carretel vê a caixa fechada e reduz o giro."},
  {"carretel", "PROTEGIDO. RETIRADA 16."},
  {"ananda", "pronto. agora tu descansa"},
  {"emibe", "até eu cansei e nem sou o carretel"},
  {"apollo", "O recibo veio junto. A data é de hoje."},
  {"calisto", "Guarda em cima dos outros. É o que libera a retirada."},
};
static const Line story_aconitumWindow[] = {
  {"aconitum", "Uhmmmn... are you still in Curitiba?"},
  {"ananda", "yes. we found the shelf"},
  {"aconitum", "That is good. I have been checking the tracking page too."},
  {"apollo", "We keep refreshing it at the same time."},
  {"aconitum", "I know. I am so excited for you guys to get it."},
  {"ananda", "we will send a photo. with everyone"},
  {"aconitum", "Please do. I would love that."},
};
static const Line story_returnHome[] = {
  {"narrator", "A passagem leva o grupo de volta ao ateliê. A caixa vai para a mesa, ainda fechada."},
  {"emibe", "AIMDSSS eu tô em picos de novo"},
  {"silver", "Noventa. você foi mesmo buscar em Curitiba."},
  {"ananda", "fui silver. não recomendo a burocracia"},
  {"calisto", "Aconitum tá esperando a foto."},
  {"apollo", "Vamos arrumar a câmera. Dá tempo de conversar com o pessoal antes."},
  {"narrator", "Converse, olhe os recados e, quando quiser, use a câmera perto do tapete para reunir o grupo."},
};
static const Line story_homeEmibe[] = {
  {"ananda", "tu tá bem leroy?"},
  {"emibe", "tô. só tô pensando que eu fiz isso tudo sem celular"},
  {"ananda", "quando o teu chegar vai ter mensagem pra um ano"},
  {"emibe", "eu vou responder tudo junto. aviso logo"},
  {"ananda", "a gente vai saber que tu voltou"},
};
static const Line story_homeSilver[] = {
  {"silver", "Noventa, a próxima encomenda a gente pede pra retirar na sala."},
  {"ananda", "silver. a próxima tu vai sozinho"},
  {"silver", "Você não ia me deixar ir sozinho."},
  {"ananda", "não ia mesmo. mas ia reclamar o caminho inteiro"},
  {"silver", "Isso eu sei."},
};
static const Line story_homeCalisto[] = {
  {"ananda", "calisto. obrigada por vir"},
  {"calisto", "Eu já ia ficar contigo hoje."},
  {"ananda", "sim mas era pra comer bolo. tu foi pra curitiba"},
  {"calisto", "Ainda vai ter bolo."},
  {"ananda", "vai. pega um pedaço comigo depois"},
  {"calisto", "Tá bom."},
};
static const Line story_homeArant[] = {
  {"ananda", "arant. tu viu tudo que aconteceu?"},
  {"arant", "vi. eu tava ajudando também"},
  {"ananda", "eu vi cê no banco ouvindo música"},
  {"arant", "eehehmmm..."},
  {"ananda", "tá bom. vem tirar a foto depois"},
  {"arant", "vou sim"},
};
static const Line story_homeCall[] = {
  {"aconitum", "There you are. Did you get back okay?"},
  {"ananda", "yes. everybody is here"},
  {"aconitum", "Good. Uhmmmn... take your time. I am not going anywhere."},
  {"apollo", "We are setting up the camera."},
  {"aconitum", "Okay. Tell Leroy I said hi."},
  {"emibe", "HIII. eu tô ouvindo daqui"},
};
static const Line story_quietReturn[] = {
  {"narrator", "A porta de Curitiba abre para a mesma passagem. Mas as placas estão em branco. Não se ouve mais a esteira."},
  {"ananda", "ué. cadê o resto do caminho"},
  {"apollo", "A luz lá no fim é do ateliê."},
  {"calisto", "Tô aqui. Pode ir."},
};
static const Line story_quietNames[] = {
  {"narrator", "Na etiqueta, a tinta reaparece: ANANDA CANUTO."},
  {"ananda", "achei que tinha apagado de vez"},
  {"calisto", "Ainda dá pra ler. Segura aqui pelo outro lado."},
};
static const Line story_quietVoices[] = {
  {"narrator", "Uma luz se acende. Do outro lado: alguém arrasta uma cadeira. Emibê pede um prato."},
  {"ananda", "é o leroy. dá pra ouvir de curitiba"},
  {"apollo", "Agora dá pra achar a casa sem placa."},
};
static const Line story_quietDoor[] = {
  {"narrator", "PICOS, PI. As letras voltam quando vocês chegam perto da porta."},
  {"ananda", "tá. agora abre antes que o bolo acabe"},
  {"calisto", "Eu guardei teu pedaço."},
};
static const Line story_boxBefore[] = {
  {"apollo", "Agora pode abrir. Tá todo mundo aqui."},
  {"ananda", "finalmente. silver segura esse canto"},
  {"silver", "Segurando, noventa."},
  {"aconitum", "Uhmmmn... there is a little envelope on top. That one is for you."},
  {"narrator", "A fita solta com cuidado. Há papel de seda por dentro. E, debaixo dele..."},
};
static const Line story_boxAfter[] = {
  {"ananda", "um álbum... aimds olha isso"},
  {"calisto", "Tem lugar pra foto de agora."},
  {"emibe", "E EU QUERO ESCOLHER A FOTO. não bota uma que eu tô falando"},
  {"silver", "Vai ser difícil achar, Leroy."},
  {"aconitum", "I left some pages empty. You guys can fill them together."},
  {"ananda", "a gente vai. obrigada mesmo"},
  {"apollo", "Tem mais um recado. Esse eu deixei pra tu ler com calma."},
};
static const Line story_finalSetup[] = {
  {"silver", "Noventa. eu já tô no lugar. Não vou sair dessa vez."},
  {"ananda", "silver tu tá na frente da câmera"},
  {"silver", "ATA. desse lado."},
  {"apollo", "Aconitum, can you see everyone?"},
  {"aconitum", "YES. Uhmmmn... move the camera a little to the left."},
  {"calisto", "Pronto."},
  {"emibe", "gente cadê a faca do bolo"},
  {"ananda", "leroy aguenta um minuto"},
};
static const Line story_windowAfter[] = {
  {"calisto", "Tem um papel na janela."},
  {"ananda", "ué. tava aí antes?"},
  {"apollo", "Não vi quem colocou."},
  {"narrator", "Um bilhete pequeno ficou preso pelo canto."},
  {"narrator", "\"feliz cumpleanos\""},
  {"ananda", "vou guardar também"},
};
static const Line story_droneArrival[] = {
  {"drones", "CHEGUEI"},
  {"ananda", "AIMDS. tu não tava dormindo"},
  {"drones", "Acordei pra beber água. Tinha oitenta mensagens falando de Curitiba."},
  {"emibe", "era um assunto urgente"},
  {"drones", "Achei que ainda dava tempo da foto."},
  {"ananda", "vem. entra logo"},
  {"drones", "Só a foto e o bolo. Amanhã eu estudo cedo."},
  {"arant", "e o forsaken"},
  {"drones", "não começa"},
};
static const StoryRef STORIES[] = {
  {"intro", story_intro, 9},
  {"tracking", story_tracking, 10},
  {"portal", story_portal, 5},
  {"hubIntro", story_hubIntro, 12},
  {"tapeIntro", story_tapeIntro, 5},
  {"tapeAfter", story_tapeAfter, 5},
  {"arant", story_arant, 8},
  {"silver", story_silver, 8},
  {"noelle", story_noelle, 6},
  {"verity", story_verity, 6},
  {"pipesIntro", story_pipesIntro, 5},
  {"pipesDone", story_pipesDone, 7},
  {"printerAfter", story_printerAfter, 5},
  {"emibe", story_emibe, 12},
  {"drones", story_drones, 9},
  {"bellsIntro", story_bellsIntro, 5},
  {"bellsDone", story_bellsDone, 16},
  {"gate", story_gate, 8},
  {"bossAfter", story_bossAfter, 7},
  {"parcel", story_parcel, 6},
  {"ending", story_ending, 15},
  {"dispatchNotice", story_dispatchNotice, 19},
  {"courtyardIntro", story_courtyardIntro, 4},
  {"bench", story_bench, 10},
  {"silverRequest", story_silverRequest, 8},
  {"photoToken", story_photoToken, 6},
  {"silverPhoto", story_silverPhoto, 7},
  {"train", story_train, 8},
  {"archiveIntro", story_archiveIntro, 7},
  {"archiveDone", story_archiveDone, 5},
  {"bridgeIntro", story_bridgeIntro, 6},
  {"bridgeDone", story_bridgeDone, 6},
  {"sortingIntro", story_sortingIntro, 7},
  {"sortingDone", story_sortingDone, 7},
  {"carretelAfter", story_carretelAfter, 6},
  {"aconitumWindow", story_aconitumWindow, 7},
  {"returnHome", story_returnHome, 7},
  {"homeEmibe", story_homeEmibe, 5},
  {"homeSilver", story_homeSilver, 5},
  {"homeCalisto", story_homeCalisto, 6},
  {"homeArant", story_homeArant, 6},
  {"homeCall", story_homeCall, 6},
  {"quietReturn", story_quietReturn, 4},
  {"quietNames", story_quietNames, 3},
  {"quietVoices", story_quietVoices, 3},
  {"quietDoor", story_quietDoor, 3},
  {"boxBefore", story_boxBefore, 5},
  {"boxAfter", story_boxAfter, 7},
  {"finalSetup", story_finalSetup, 8},
  {"windowAfter", story_windowAfter, 6},
  {"droneArrival", story_droneArrival, 9},
};
static const int STORY_COUNT = sizeof(STORIES)/sizeof(STORIES[0]);