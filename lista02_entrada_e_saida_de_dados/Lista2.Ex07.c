/*7. Considere o trecho de c�digo abaixo. Ele l� um n�mero inteiro do teclado e o imprime como se fosse um n�mero em
ponto flutuante. Implemente o programa e observe se ocorre um erro de compila��o ou um erro de execu��o. Qual a
corre��o necess�ria para que o programa execute sem erros?*/

#include <stdio.h>

int main ()
{
    int aux;

    printf (" Digite um numero inteiro : ");
    scanf("%d", &aux);
    printf("%d", aux); //originalmente, o c�digo tinha "%f" nesta linha ao inv�s de "%d"

    /*Imprimir como float causa um erro de execu��o devido � diferen�a de tipos da vari�vel sendo chamada. Mudar %f para %d corrige o problema.*/

    return 0;
}
