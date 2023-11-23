
E. Rafael D. Sousa
César Cruz

EISC  3º Ano
UC - Sistemas Computacionais
TP3 - Calculadora.

Neste documento consta-se a explicação de um programa na linguagem C de uma calculadora, cujo problema se resume da seguinte maneira:

Sys1: Calculadora - apresentação de uma Calculadora com um menu principal que permite ao utilizador escolher as operações que pretende realizar,  dentre as operações permitidas, destacam-se: soma, subtração, divisão e multiplicação. Depois de escolher a opção da operação, pede os números e depois apresenta o resultado dessa operação,  e nessa apresentação do resultado deve-se mostrar um submenu com as opções para dar continuidade ao fluxo normal do programa,  este menu deve ter a opção de sair e a opção de voltar ao menu principal para realizar novas operações.  Deve-se considerar todas as validações necessárias para permitir o normal funcionamento do sistema e de forma coerente.

Explicação do fluxograma/programa:

- Ao rodar o programa, deparar-se-á com a seguinte situação de escolha:

" Escolha a operação a ser feita:
	1 - Adição
	2 - Subtração
	3 - Multiplicação
	4 - Divisão "

Será pedido ao utilizador um input, cujo este deve introduzir de 1 à 4, de acordo com a escolha da operação a ser feita.

Após se escolher a operação, será pedido ao utilizador que insira os dois números a serem operados e depois 'enter' para que seja realizada a operação.

Ao se introduzir os inputs, será feita a sua validação de acordo com a operação a ser feita.
Na adição não será necessária a validação, pois pode-se adicionar quaisquer números.

Na subtração, como não se pode subtrair um número superior de um inferior, logo o primeiro número introduzido deverá ser maior do que o segundo, se não for vai ser exibida uma mensagem de erro como output e pedido que o utilizador insira novos números a serem operados.

Na Multiplicação e na divisão, como qualquer número multiplicado ou dividido por zero terá como resultado sempre zero, logo será verificado se algum dos números introduzidos é zero, e se for, vai ser exibida uma mensagem de erro como output e pedido que o utilizador insira novos números a serem operados.

Após todas as verificações forem feiras e não for encontrados erros ou casos inválidos, será exibido o resultado da operação como output por um determinado tempo e depois aperecerá uma menssagem a perguntar se o utilizador quer voltar ao menu ou sair da execução do programa. Este deverá escolher o menu - 1, ou sair do programa - 2. 

Assim termina o programa.
