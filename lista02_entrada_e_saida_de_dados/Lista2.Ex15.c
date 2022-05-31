/*15. Faça um algoritmo que dado um número de segundos, converta para dias, horas, minutos e segundos. Por exemplo,
7322 segundos correspondem a 0 dias, 2 horas, 2 minutos e 2 segundos.*/

#include <stdio.h>

int main()
{
    int entrada, s, min, hora, dia, aux1, aux2;

    printf("Calculadora de tempo. \nDigite uma quantidade de segundos: ");
    scanf("%d", &entrada);

    dia = entrada/86400;
    aux1 = entrada%86400;

    hora = aux1/3600;
    aux2 = aux1%3600;

    min = aux2/60;

    s = aux2%60;

    printf("\n\n%d segundos correspondem a %d dia(s), %d hora(s), %d minuto(s) e %d segundo(s)", entrada, dia, hora, min, s);

    return 0;
}
