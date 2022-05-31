/*7. Considere o trecho de código abaixo. Ele lê um número inteiro do teclado e o imprime como se fosse um número em
ponto flutuante. Implemente o programa e observe se ocorre um erro de compilação ou um erro de execução. Qual a
correção necessária para que o programa execute sem erros?*/

#include <stdio.h>

int main ()
{
    int aux;

    printf (" Digite um numero inteiro : ");
    scanf("%d", &aux);
    printf("%d", aux); //originalmente, o código tinha "%f" nesta linha ao invés de "%d"

    /*Imprimir como float causa um erro de execução devido à diferença de tipos da variável sendo chamada. Mudar %f para %d corrige o problema.*/

    return 0;
}
