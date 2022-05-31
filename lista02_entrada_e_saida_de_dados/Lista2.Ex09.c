/*9. Faça um programa que calcule o perímetro (2xbase + 2xaltura) de um retângulo.*/

#include <stdio.h>

int main()
{
    float b, h, p2;

    printf("Digite um valor para a base do retangulo: ");
    scanf("%f", &b);

    printf("\nDigite um valor para a altura do retangulo: ");
    scanf("%f", &h);

    p2 = 2*b + 2*h;

    printf("\n\nO perimetro deste retangulo eh %f\n", p2);

    return 0;
}
