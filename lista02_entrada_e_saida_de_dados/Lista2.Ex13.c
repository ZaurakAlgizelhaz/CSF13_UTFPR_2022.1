/*13. Calcule o consumo m�dio de um autom�vel sendo fornecidos a dist�ncia total percorrida (em Km, representada como
um inteiro) e o total de combust�vel gasto (em litros, representado por um valor real). Apresente o valor que representa
o consumo m�dio do autom�vel com 3 casas ap�s a v�rgula, seguido da mensagem "km/l".*/

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
