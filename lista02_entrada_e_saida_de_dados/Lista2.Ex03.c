/*3. Implemente um programa que leia três variáveis do teclado, uma de cada tipo: char, int e float (o programa deve
ler nesta ordem, ou seja, primeiro variável tipo char, depois int e depois float). Lembre-se de que uma variável
tipo char armazena um único caractere (letra, símbolo ou dígito), então ao fornecer o seu valor via teclado evite uma
sequência de caracteres (forneça apenas um caractere). Ao final, imprima o conteúdo de cada variável. Lembre-se de
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
