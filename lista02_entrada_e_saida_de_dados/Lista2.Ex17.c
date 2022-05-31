/*17. Construa um programa que receba o valor de uma temperatura em graus Celsius (C) e calcule a sua temperatura
correspondente em graus Farenheit (F)*/

#include <stdio.h>

int main()
{
    float c, f;

    printf("Conversor de temperaturas. \nDigite uma temperatura em graus Celsius(C): ");
    scanf("%f", &c);

    f = ((c*9)/5)+32;

    printf("\nEsta temperatura em graus Fahrenheit(F) equivale a %.1f graus.", f);

    return 0;
}
