/*9. Desafio: Faça um programa que:
• Gere dois números aleatórios, n1 e n2, inteiros positivos e no intervalo r1, 100s
• Escolha aleatoriamente uma das operações aritméticas a seguir:
soma, subtração, multiplicação, quociente da divisão (parte inteira da divisão), resto da divisão.
• Peça ao usuário que forneça o resultado da operação aritmética escolhida considerando os valores de n1 e n2.
• Monitore o tempo de resposta do usuário (dica: use uma função da biblioteca time.h).
• Exiba uma mensagem dizendo se o usuário acertou ou errou a resposta, acompanhada do tempo calculado.*/

#include <stdio.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    rand();

    int n1, n2, operacao, resultado;
    n1 = (rand()%101)+1;
    n2 = (rand()%101)+1;
    operacao = rand()%5;

    clock_t inicio = clock();

    if(operacao==0)
    {
        printf("Qual o resultado de %d + %d?\n", n1, n2);
        scanf("%d", &resultado);

        if(resultado==n1+n2)
            printf("\nCorreto!");
        else
            printf("\nErrado, o resultado correto era %d.", n1+n2);
    }

    else if(operacao==1)
    {
        printf("Qual o resultado de %d - %d?\n", n1, n2);
        scanf("%d", &resultado);

        if(resultado==n1-n2)
            printf("\nCorreto!");
        else
            printf("\nErrado, o resultado correto era %d.", n1-n2);
    }

    else if(operacao==2)
    {
        printf("Qual o resultado de %d x %d?\n", n1, n2);
        scanf("%d", &resultado);

        if(resultado==n1*n2)
            printf("\nCorreto!");
        else
            printf("\nErrado, o resultado correto era %d.", n1*n2);
    }

    else if(operacao==3)
    {
        printf("Qual a parte inteira do quociente da divisao de %d por %d?\n", n1, n2);
        scanf("%d", &resultado);

        if(resultado==floor(n1/n2))
            printf("\nCorreto!");
        else
            printf("\nErrado, o resultado correto era %d.", n1/n2);
    }

    else if(operacao==4)
    {
        printf("Qual o resto da divisao de %d por %d?\n", n1, n2);
        scanf("%d", &resultado);

        if(resultado==n1%n2)
            printf("\nCorreto!");
        else
            printf("\nErrado, o resultado correto era %d.", n1%n2);
    }

    clock_t fim = clock();
    float tempo_total = (float)(fim - inicio) / CLOCKS_PER_SEC;
    printf(" Voce levou %.2f segundos para responder ao exercicio!", tempo_total);

    return 0;
}
