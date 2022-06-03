/*8. Dadas a data atual e a data de nascimento de uma pessoa,
• (a) calcular a sua idade.*/

#include <stdio.h>
#include <time.h> //Aqui eu errei no exercício, ao invés de pedir a data atual, usei a biblioteca time.h.
#include <math.h>

int main()
{
    int idade, semana_nascimento;
    int ano_atual, mes_atual, dia_atual, ano_inicial, mes_inicial, dia_inicial;

    time_t data_atual;
    time(&data_atual);
    struct tm *data_final = localtime(&data_atual);

    ano_atual = (data_final->tm_year+1900);
    mes_atual = (data_final->tm_mon+1);
    dia_atual = (data_final->tm_mday);

    printf("Por favor, digite a data de seu nascimento (formato dd/mm/aaaa): \n");
    scanf("%d/%d/%d", &dia_inicial, &mes_inicial, &ano_inicial);

    idade = ano_atual - ano_inicial;

    if(idade<0)
        {
            printf("\nVoce ainda nao nasceu!");
            return 0;
        }

    else if(mes_atual<mes_inicial)
    {
        idade --;
        if(idade<0)
        {
            printf("\nVoce ainda nao nasceu!");
            return 0;
        }
        else
            printf("\nVoce tem %d anos", idade);
    }

    else if(mes_atual==mes_inicial)
    {
        if(dia_atual<dia_inicial)
        {
            idade --;
            if(idade<0)
            {
                printf("\nVoce ainda nao nasceu!");
                return 0;
            }
            else
                printf("\nVoce tem %d anos", idade);

        }
        else if(dia_atual==dia_inicial)
            printf("\nParabens, hoje voce faz %d anos", idade);

        else
            printf("\nVoce tem %d anos", idade);
    }

    else
        printf("\nVoce tem %d anos", idade);

    return 0;
}
