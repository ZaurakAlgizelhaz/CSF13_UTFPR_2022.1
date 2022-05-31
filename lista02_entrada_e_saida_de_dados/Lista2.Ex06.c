/*6. Implemente um programa que leia 2 valores inteiros e armazene-os nas vari�veis n1 e n2. Calcule a m�dia entre n1 e
n2, atribuindo o seu resultado na vari�vel media. Imprima o valor de media. Qual a sa�da do seu programa para n1=2
e n2=4? E para n1=2 e n2=3? Modifique o programa para que possa calcular e imprimir a m�dia corretamente.*/

#include <stdio.h>

int main()
{
    int n1, n2;
    float media;

    printf("Digite o primeiro valor: ");
    scanf("%d", &n1);

    printf("\nDigite o segundo valor: ");
    scanf("%d", &n2);

    media = (float)(n1 + n2)/2;

    printf("\n\nA media entre %d e %d eh %.2f.\n\n", n1, n2, media);

    /*Para imprimir a m�dia corretamente � necess�rio utilizar a vari�vel m�dia como float,
    al�m de converter os valores int para float durante a express�o matem�tica.*/

    return 0;
}
