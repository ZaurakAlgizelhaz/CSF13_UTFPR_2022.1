/*13. Calcule o consumo médio de um automóvel sendo fornecidos a distância total percorrida (em Km, representada como
um inteiro) e o total de combustível gasto (em litros, representado por um valor real). Apresente o valor que representa
o consumo médio do automóvel com 3 casas após a vírgula, seguido da mensagem "km/l".*/

#include <stdio.h>

int main()
{
    int km;
    float litro, eficiencia;

    printf("Eficiencia media de um automovel. \n\nDigite a distancia total percorrida (em quilometros): ");
    scanf("%d", &km);

    printf("Digite o total de combustivel gasto (em litros): ");
    scanf("%f", &litro);

    eficiencia = (float)km/litro;

    printf("\nEste automovel tem uma eficiencia de %.3f km/l.", eficiencia);

    return 0;
}
