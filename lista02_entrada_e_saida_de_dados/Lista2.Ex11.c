/*11. Faça um programa que leia três valores inteiros e apresente o máximo dos três valores lidos seguido da mensagem “eh
o maior”. Utilize a fórmula:
maxAB (a + b + abs(a - b))/2
Obs. abs() é uma função da biblioteca stdlib.h! Para isso lembre de incluir stdlib.h de forma similar stdio.h.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c, aux1, aux2;

    printf("Digite tres valores inteiros.\nValor 1: ");
    scanf("%d", &a);
    printf("Valor 2: ");
    scanf("%d", &b);
    printf("Valor 3: ");
    scanf("%d", &c);

    aux1 = (a+b+abs(a-b))/2;
    aux2 = (aux1+c+abs(aux1-c))/2;

    printf("\n\n%d eh o maior dos tres valores.", aux2);

    return 0;
}
