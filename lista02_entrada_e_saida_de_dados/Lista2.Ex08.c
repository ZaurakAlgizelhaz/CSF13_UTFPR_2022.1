/*8. Considere o programa abaixo. Ele l� um caractere e o imprime como se fosse um n�mero inteiro. Que n�mero � esse
exibido pelo programa? � um erro de execu��o ou ele tem algum significado?*/

#include <stdio.h>

int main ()
{

    char aux;

    printf(" Digite um caracter : ");
    scanf("%c", &aux);
    printf("%d", aux);

    return 0;

    /*O programa exibe o valor decimal do caractere na tabela ASCII, n�o � um erro.
    (Inclusive, o assunto foi discutido na primeira aula da disciplina).*/
}
