/*16. Fa�a um programa que, dado um n�mero inteiro como entrada, retorne seu �ltimo d�gito.*/

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
