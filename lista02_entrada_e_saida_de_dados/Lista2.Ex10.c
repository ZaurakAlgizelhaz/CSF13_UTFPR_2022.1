/*10. Faça um programa que calcule e mostre o volume de uma esfera sendo fornecido o valor de seu raio (r). A fórmula
para calcular o volume é: (4/3)*PI*r^3. Considere (atribua) para a constante PI o valor 3.14159.*/

#include <stdio.h>
#define pi 3.14159

int main()
{
    int r;
    double vol;

    printf("Digite um valor para o raio da esfera: ");
    scanf("%d", &r);

    vol = (4*pi*r*r*r)/3;

    printf("O volume desta esfera eh: %lf", vol);

    return 0;
}
