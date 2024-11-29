/*Crie um programa em C que solicite ao usuário três números inteiros e, em seguida, execute as
seguintes operações:
1. Calcule a soma, subtração, multiplicação e divisão dos três números.
2. Verifique, utilizando operadores relacionais, se o primeiro número é maior que o segundo,
e se o segundo é menor que o terceiro.

3. Utilize operadores lógicos para verificar se o primeiro número é positivo e o segundo
número é par. Caso ambas as condições sejam verdadeiras, o programa deverá exibir
uma mensagem específica.

*/


#include <stdio.h>

int main()
{
    int num1, num2, num3;
    int soma, subtracao, multiplicacao;
    float divisao;
    
    printf("Digite o primeiro número: ");
    scanf("%d", &num1);
    printf("Digite o segundo número: ");
    scanf("%d", &num2);
    printf("Digite o terceiro número: ");
    scanf("%d", &num3);
    
    soma = num1 + num2 + num3;
    subtracao = num1 - num2 - num3;
    multiplicacao = num1 * num2 * num3;
    divisao = (float)num1 / num2 / num3;
    
    printf("Soma: %d\n", soma);
    printf("Subtração: %d\n", subtracao);
    printf("Multiplicação: %d\n", multiplicacao);
    printf("Divisão: %.2f\n", divisao);
    
    if(num1 > num2) {
        printf("O primeiro número é maior que o segundo.\n");
    }

    if(num2 < num3) {
        printf("O segundo número é menor que o terceiro.\n");
    }
    
    if(num1 > 0 && num2 % 2 == 0)
    {
        printf("O primeiro número é positivo e o segundo número é par.\n");
    }
    
    return 0;
}