/*19. Fa�a um programa que leia 3 valores que correspondem �s tr�s notas de um aluno. A seguir, calcule a m�dia do aluno,
sabendo que a primeira nota tem peso 2, a segunda nota tem peso 3 e a terceira nota tem peso 5. Considere que cada
nota pode ir de 0 at� 10.0. Imprima a m�dia com 1 d�gito ap�s o ponto decimal.*/

#include <stdio.h>

int main()
{
    float n1, n2, n3, media;

    printf("Digite a seguir as tres notas do aluno. \nNota 1: ");
    scanf("%f", &n1); //peso 2

    printf("Nota 2: ");
    scanf("%f", &n2); //peso 3

    printf("Nota 3: ");
    scanf("%f", &n3); //peso 5

    media = (2*n1+3*n2+5*n3)/10;

    printf("\n\nA media final do aluno sera de %.1f", media);

    return 0;
}
