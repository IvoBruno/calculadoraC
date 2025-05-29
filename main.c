#include <stdio.h>

int main (){
    float num1 = 0.0, num2 = 0.0;
    char operacao = ' ';

    printf("Digite o primeiro numero: ");
    scanf("%f", &num1);
    printf("\nDigite o segundo numero: ");
    scanf("%f", &num2);
    printf("Digite a operacao desejada (+ - * /)");
    scanf("%c", &operacao);
}