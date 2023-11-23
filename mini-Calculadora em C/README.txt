
E. Rafael D. Sousa
C�sar Cruz

EISC  3� Ano
UC - Sistemas Computacionais
TP3 - Calculadora.

Neste documento consta-se a explica��o de um programa na linguagem C de uma calculadora, cujo problema se resume da seguinte maneira:

Sys1: Calculadora - apresenta��o de uma Calculadora com um menu principal que permite ao utilizador escolher as opera��es que pretende realizar,  dentre as opera��es permitidas, destacam-se: soma, subtra��o, divis�o e multiplica��o. Depois de escolher a op��o da opera��o, pede os n�meros e depois apresenta o resultado dessa opera��o,  e nessa apresenta��o do resultado deve-se mostrar um submenu com as op��es para dar continuidade ao fluxo normal do programa,  este menu deve ter a op��o de sair e a op��o de voltar ao menu principal para realizar novas opera��es.  Deve-se considerar todas as valida��es necess�rias para permitir o normal funcionamento do sistema e de forma coerente.

Explica��o do fluxograma/programa:

- Ao rodar o programa, deparar-se-� com a seguinte situa��o de escolha:

" Escolha a opera��o a ser feita:
	1 - Adi��o
	2 - Subtra��o
	3 - Multiplica��o
	4 - Divis�o "

Ser� pedido ao utilizador um input, cujo este deve introduzir de 1 � 4, de acordo com a escolha da opera��o a ser feita.

Ap�s se escolher a opera��o, ser� pedido ao utilizador que insira os dois n�meros a serem operados e depois 'enter' para que seja realizada a opera��o.

Ao se introduzir os inputs, ser� feita a sua valida��o de acordo com a opera��o a ser feita.
Na adi��o n�o ser� necess�ria a valida��o, pois pode-se adicionar quaisquer n�meros.

Na subtra��o, como n�o se pode subtrair um n�mero superior de um inferior, logo o primeiro n�mero introduzido dever� ser maior do que o segundo, se n�o for vai ser exibida uma mensagem de erro como output e pedido que o utilizador insira novos n�meros a serem operados.

Na Multiplica��o e na divis�o, como qualquer n�mero multiplicado ou dividido por zero ter� como resultado sempre zero, logo ser� verificado se algum dos n�meros introduzidos � zero, e se for, vai ser exibida uma mensagem de erro como output e pedido que o utilizador insira novos n�meros a serem operados.

Ap�s todas as verifica��es forem feiras e n�o for encontrados erros ou casos inv�lidos, ser� exibido o resultado da opera��o como output por um determinado tempo e depois aperecer� uma menssagem a perguntar se o utilizador quer voltar ao menu ou sair da execu��o do programa. Este dever� escolher o menu - 1, ou sair do programa - 2. 

Assim termina o programa.
