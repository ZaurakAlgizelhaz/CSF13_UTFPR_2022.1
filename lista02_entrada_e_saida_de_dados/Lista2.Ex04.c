/*4. Modifique o programa anterior para que leia primeiro o tipo int e depois os outros. Veja que a nova ordem vai dar
problema na leitura do tipo char. Você consegue corrigir o erro de forma que a ordem int, char e float possa ser
respeitada?*/

#include <stdio.h>

int main()
{
    char signo;
    int numero;
    float real;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    printf("\nDigite um caractere: ");
    scanf(" %c", &signo);

    printf("\nDigite um numero real: ");
    scanf("%f", &real);

    printf("\n\nO caractere digitado foi %c, o numero inteiro foi %i, e o numero real foi %f\n\n", signo, numero, real);

    return 0;
}
