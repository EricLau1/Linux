VIM

O menu que eu fiz, provavelmente so funcionará numa maquina Linux.

Precisa ter o C++ instalado.

Acesse o terminal, procure a pasta Vim e digite o comando:

g++ -o main main.cpp  <- para compilar

./main <- para executar

Tudo que estiver entre [colchetes] significa que é tecla a ser pressionada.

entrar no vim:

~> vim nome_do_arquivo

~> vimtutor ~ entra no Tutorial do VIM

Observação: [Ctrl]+[s] = bloqueia o vim
            [Ctrl]+[q] = desbloqueia o vim e escreve tudo o que foi digitado enquanto ele estava bloqueado.      

******************************************************************************************************************************************

Sair do vim:

~> :q

~> :q! ~ força a saída caso nao queira salvar as modificações

~> :quit!

******************************************************************************************************************************************

Salvar modificações:

~> :w ~ salvar *igual ao (Ctrl + S)

~> :wq ~ salvar e sair

~> :x ~ salvar e sair

~> ZZ ~ salvar e sair

******************************************************************************************************************************************

Ajuda

~> :help ~ entra no modo de ajuda geral

~> :help nome_do_comando ~ entra no modo de ajuda a partir do comando informado. Ex: ~> :help :q

~> :q ~ sair do modo de ajuda

******************************************************************************************************************************************

Modo de Comandos

Os comandos irão variar caso as teclas sejam Maiusculas ou Minusculas.

Funções das teclas:

[h] ~ move o cursor 1 caractere para esquerda

[j] ~ move o cursor 1 caractere para baixo

[k] ~ move o cursor 1 caractere para cima

[l] ~ move o cursor 1 caractere para direita

[r] ~ permite substituir um caractere sob o cursor

   variação ~  3+[r]+s ~ ao digitar essa combinação será inserido a partir do cursor 3 letras s

               o valor máximo será a quantidade de caracteres existentes na linha a partir da posição do cursor,

               ou seja, para que o comando [R] funcione e preciso que exista caracteres o suficiente na linha.

[w] ~ move o cursor para o inicio da proxima palavra

[b] ~ move o cursor para o inicio da palavra anterior

[H] ~ move o cursor para o começo da Tela

[L] ~ move o cursor para o final da Tela

     Observação ~ [H] e [L] ~ essas teclas circulam pela tela e não pelo arquivo, ou seja,

                  se a quantidade de linhas do arquivo ultrapassar o que estiver sendo exibido

                  na tela, estes comandos não irão diretamente para o inicio ou final do arquivo.

[G] ~ move o cursor para o inicio da ultima linha do arquivo

   variação ~ 5+[G] ~ ao digitar essa combinação o cursor irá para 5ª linha do arquivo independente de onde estiver,

              o valor maximo depende da quantidade de linhas que existir no arquivo.

              1+[G] ~ voltar para o inicio da primeira linha do arquivo.

[0] ou [Home] ~ move o cursor para o inicio da linha atual  

[^] ~ move o cursor para o primeiro carctere da linha atual que não seja espaço em branco

[$] ou [End] ~ move o cursor para o final da linha atual

[Ctrl] + g ~ informa a quantidade de linhas existente no arquivo, e a posição atual do cursor em porcentagem

[Ctrl] + u ~ move o cursor meia tela para cima

[Ctrl] + d ~ move o cursos meia tela para baixo          

******************************************************************************************************************************************

Numeração de linhas:

:set number ~ ativa a numeração

:set nonumber ~ destiva a numeração

******************************************************************************************************************************************

Entrar no modo de Inserção

Ao entrar no modo de inserção significa que o terminal irá se

comportar como um Editor de Textos ao pressionar as Teclas:

~> [a] ~ começa um caractere a frente do caractere sob o cursor

~> [A] ~ começa com o cursor no final da linha atual

~> [o] ~ cria uma nova linha abaixo da linha atual

~> [O] ~ cria uma nova linha acima da linha atual

~> [i] ~ começa a partir de onde estiver o cursor

~> [I] ~ começa com o cursor no inicio da linha

******************************************************************************************************************************************

sair do modo de Inserção:

~> [esq]

*******************************************************************************************************************************************

Modificações nos caracteres e nas linhas - "Modo de Comandos"

~> [J] ~ Junta a linha atual com a linha que está abaixo adicionando um espaço entre elas

~> [~] ~ Muda a forma do caractere sob o cursor, se for maiuscula virá minúscula ou ao contrário.

      variação ~ 3+[~] ~ esta combinação muda 3 caracteres a partir do cursor,

      a quantidade irá depender de quantos caracteres existem na linha a partir do cursor

~> [x] ~ apaga o caractere abaixo do cursor

      variação ~ 3+[x] ~ esta combinação apaga três caracteres a partir do cursor

      Observação: a quantidade sempre irá depender da quantidade existente de caracteres na linha a partir do cursor

~> [X] ~ apaga o caractere a esquerda do cursor

      variação ~ 3+[X] ~ esta combinação apaga três caracteres a esquerda do cursor

      Observação: a quantidade sempre irá depender da quantidade existente de caracteres na linha a partir do cursor

~> [s] ~ apaga o caractere abaixo do cursor entra no modo de inserção

~> [S] ~ apaga a linha inteira e entra no modo de inserção

~> [u] ~ desfaz o ultimo comando ~:> *igual ao (Ctrl+Z)*

~> [Ctrl] + [r] ~ refaz o ultimo comando desfeito pelo [u]

*******************************************************************************************************************************************

Copiar e Colar - "modo de comandos"

~> [y]+3 ~ esta combinação copia a linha atual e mais tres linhas abaixo caso exista

~> [y]+[w] ~ esta combinação copia uma palavra inteira

~> [y][y] ~ copia a linha inteira

~> [Y] ~ copia a linha inteira

~> [p] ~ cola após o cursor

~> [P] ~ cola antes de cursor

~> [d][d] ~ recorta a linha atual

~> [d][w] ~ recorta a palavra a partir do cursor

~> 5+[d][d] ~ esta combinação recorta a linha atual e mais 5 linhas a partir do cursor

~> [D] ~ recortar a partir do cursor até o final da linha

~> [c][c] ~ corta a linha atual inteira e entra no modo de inserção

*******************************************************************************************************************************************

Caracteres Especiais

:digraphs ~ mostra a tabela de caracteres especiais e seus repectivos codigos

    Observação: ao acessar a tabela, os caracteres apareceram em blocos de 3 colunas,

    a primeira coluna é o codigo que será preciso para que posso inseri-lo no texto,

    a 2ª coluna mostra qual o caractere representa aquele codigo,

    a 3ª coluna apenas contabilaza os caracteres existentes.

 Para inserir um caractere e preciso estar no modo de inserção é claro.

~> [Ctrl] + [k] + codigo do caractere ~ exemplo: [Ctrl] + [k] + K3 ~ esta combinação cria uma cobrinha
