/*3. Implemente um programa que leia tr�s vari�veis do teclado, uma de cada tipo: char, int e float (o programa deve
ler nesta ordem, ou seja, primeiro vari�vel tipo char, depois int e depois float). Lembre-se de que uma vari�vel
tipo char armazena um �nico caractere (letra, s�mbolo ou d�gito), ent�o ao fornecer o seu valor via teclado evite uma
sequ�ncia de caracteres (forne�a apenas um caractere). Ao final, imprima o conte�do de cada vari�vel. Lembre-se de
usar nomes significativos e de imprimir mensagens adequadas!*/

#include <stdio.h>

int main()
{
    char signo;
    int numero;
    float real;

    printf("Digite um caractere: ");
    scanf(" %c", &signo);

    printf("\nDigite um numero inteiro: ");
    scanf("%d", &numero);

    printf("\nDigite um numero real: ");
    scanf("%f", &real);

    printf("\n\nO caractere digitado foi %c, o numero inteiro foi %i, e o numero real foi %f\n\n", signo, numero, real);

    return 0;
}
