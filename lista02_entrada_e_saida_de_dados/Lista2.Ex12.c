/*12. Modifique o programa anterior para imprimir tamb�m o menor (N�O use o condicional if - veja se consegue abstrair
como deve ser a f�rmula do menor a partir do entendimento de como funciona a f�rmula do maior).*/


#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c, aux1, maior, aux2, menor;

    printf("Digite tres valores inteiros.\nValor 1: ");
    scanf("%d", &a);
    printf("Valor 2: ");
    scanf("%d", &b);
    printf("Valor 3: ");
    scanf("%d", &c);

    aux1 = (a+b+abs(a-b))/2;
    maior = (aux1+c+abs(aux1-c))/2;

    aux2 = (a+b-abs(a-b))/2;
    menor = (aux2+c-abs(aux2-c))/2;

    printf("\n\n%d eh o maior dos tres valores, enquanto %d eh o menor deles.", maior, menor);

    return 0;
}
