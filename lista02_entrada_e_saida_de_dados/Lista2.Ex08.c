/*8. Considere o programa abaixo. Ele lê um caractere e o imprime como se fosse um número inteiro. Que número é esse
exibido pelo programa? É um erro de execução ou ele tem algum significado?*/

#include <stdio.h>

int main ()
{

    char aux;

    printf(" Digite um caracter : ");
    scanf("%c", &aux);
    printf("%d", aux);

    return 0;

    /*O programa exibe o valor decimal do caractere na tabela ASCII, não é um erro.
    (Inclusive, o assunto foi discutido na primeira aula da disciplina).*/
}
