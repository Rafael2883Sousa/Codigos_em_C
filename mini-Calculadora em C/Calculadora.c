
#include<stdio.h>
#include<stdlib.h>

// Calculadora em linguagem C

void adicao(){
    float num1, num2;

    printf("Adiá∆o\nIntroduza os dois n£meros a serem adicionados:\n");
    scanf("%f %f", &num1, &num2);

    float soma = num1 + num2;
    printf("A soma de %.1f com %.1f Ç igual a %.1f\n", num1, num2, soma);
}

void subtracao(){
    float num1, num2;

    printf("Subtraá∆o\nIntroduza os dois n£meros a serem subtraidos:\n");
    scanf("%f %f", &num1, &num2); 
    if( num2 > num1 ){ // Validaá∆o
        while ( num2 > num1 ){
            printf("Erro! O primeiro n£mero introduzido deve ser maior que o segundo.\nTente de novo.\n");
            scanf("%f %f", &num1, &num2);
        }  
    }    

    float sub = num1 - num2;
    printf("A subtraá∆o de %.1f com %.1f Ç igual a %.1f\n", num1, num2, sub);
}

void multiplicacao(){
    float num1, num2;

    printf("Multiplicaá∆o\nIntroduza os dois n£meros a serem multiplicados:\n");
    scanf("%f %f", &num1, &num2);

    if( num1 == 0 || num2 == 0 ){ // Validaá∆o
        while( num1 == 0 || num2 == 0 ){
            printf("Erro! Nenhum dos n£meros introduzidos deve ser igual a zero.\nTente de novo\n");
            scanf("%f %f", &num1, &num2);
        }
    }

    float mult = num1 * num2;
    printf("A multiplicaá∆o de %.1f com %.1f Ç igual a %.1f\n", num1, num2, mult);
}

void divisao(){
    float num1, num2;

    printf("Divis∆o\nIntroduza os dois n£meros a serem divididos:\n");
    scanf("%f %f", &num1, &num2);

    if( num1 == 0 || num2 == 0 ){ // Validaá∆o
        while( num1 == 0 || num2 == 0 ){
            printf("Erro! Nenhum dos n£meros introduzidos deve ser igual a zero.\nTente de novo\n");
            scanf("%f %f", &num1, &num2);
        }
    }
    // 
    float div = num1 / num2;
    printf("A divis∆o de %.1f com %.1f eh igual a %.1f\n", num1, num2, div);
}

void escolha(){
    int esc; // Escolha sair ou voltar ao menu
    printf("\nDeseja sair da calculadora?\nSe sim digite 1, se desejar fazer mais operaá‰es digite 2.\n");
    scanf("%d", &esc);

    if( esc == 2 ){
        menu();
    } else if( esc == 1){
        system("exit");
    } else { // Se digitado um n£mero diferente de 1 e 2.
        while( esc < 1 || esc > 2){
            printf("N£mero invalido!\nIntroduza 1 se desejar sair ou 2 se desejar fazer mais operaá‰es.\n");
        }
    }
}

void menu(){

    // Escolha da operaá∆o a ser feita
    printf("\nEscolha a operaá∆o a ser feita:\nAdiá∆o - 1\nSubtraá∆o - 2\nMultiplicaá∆o - 3\nDivis∆o - 4\n");

    int op;
    scanf("%d", &op);

    if(op == 1){    // Se digitado o numero 1 - Adiá∆o
        adicao();
        escolha();

    } else if(op == 2){   // Se digitado o numero 2 - Subtraá∆o
        subtracao();
        escolha();

    } else if( op == 3){     // Se digitado o numero 3 - Multiplicaá∆o
        multiplicacao();
        escolha();

    } else if( op == 4){     // Se digitado o numero 4 - Divis∆o
        divisao();
        escolha();

    } else {       // Se digitado um n£mero diferente de 1, 2, 3 e 4.
        while( op < 1 || op > 4){
            printf("N£mero invalido!\nIntroduza um n£mero de 1 a 4 de acordo com a operaá∆o que deseja.\n");
            scanf("%d", &op);
        }
        menu();
    }
}

int main(){

    menu();
    
    return 0;
}