/*18. Construa um programa que calcule o gasto de uma viagem de carro de uma cidade a outra, sabendo:
• O carro utilizado roda 15 Km com 1 litro de gasolina.
• O preço da gasolina é de R$2,60.
• O valor de cada pedágio é de R$8,00.
Seu programa deve receber a distância e a quantidade de pedágios entre as cidades.*/

#include <stdio.h>

int main()
{
    float distancia, aux1, custo1, custo2;
    int pedagio;

    printf("Digite qual a distancia (em quilometros) entre as cidades: ");
    scanf("%f", &distancia);

    printf("\nDigite qual a quantidade de pedagios na estrada: ");
    scanf("%d", &pedagio);

    aux1 = distancia/15;
    custo1 = aux1*2.6;

    custo2 = pedagio*8;

    printf("\nO custo total da viagem sera de R$%.2f, sendo R$%.2f o custo da gasolina e R$%.2f o custo do pedagio.", custo1+custo2, custo1, custo2);

    return 0;
}
