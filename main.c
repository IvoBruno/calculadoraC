#include <stdio.h>

int main (){
    float num1 = 0.0, num2 = 0.0;
    char operacao = ' ';

    while (1){
        printf("\nDigite o primeiro numero: ");
        scanf("%f", &num1);
        printf("\nDigite o segundo numero: ");
        scanf("%f", &num2);
        printf("\nDigite a operacao desejada (+ - * /)");
        scanf(" %c", &operacao);

        if (operacao == '/' && num2 == 0){
            printf("\nOperacao invalida, divisao por 0 (zero)! ");
            continue;
        }
        
        switch (operacao){
            case '+':
                printf("\n%.2f + %.2f = %.2f", num1, num2, num1 + num2);
                break;
            case '-':
                printf("\n%.2f - %.2f = %.2f", num1, num2, num1 - num2);
                break;
            case '*':
                printf("\n%.2f + %.2f = %.2f", num1, num2, num1 * num2);
                break;
            case '/':
                printf("\n%.2f + %.2f = %.2f", num1, num2, num1 / num2);
                break;
            default:
                printf("\nOperacao invalida, tente novamente. ");
        }
    }
    return 0;
}