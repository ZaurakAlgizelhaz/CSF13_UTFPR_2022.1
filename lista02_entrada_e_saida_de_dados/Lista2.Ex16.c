/*16. Faça um programa que, dado um número inteiro como entrada, retorne seu último dígito.*/

#include <stdio.h>

int main()
{
    int num, ultimo;

    printf("Digite um numero: ");
    scanf("%d", &num);

    ultimo = num%10;

    printf("\nO ultimo digito deste numero eh %d", ultimo);

    return 0;
}
