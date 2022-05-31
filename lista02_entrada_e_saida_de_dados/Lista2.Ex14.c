/*14. Faça um programa que leia um número inteiro e informe com quais cédulas podemos representá-lo. Suponha que
estejam disponíveis apenas notas de R$ 50, R$5 e R$1. Exemplo de resposta: R$ 218 = 4 cédulas de 50, 3 cédulas de
5 e 3 cédulas de 1.*/

#include <stdio.h>

int main()
{
    int onca, garca, bFlor, dinheiro, aux1;

    printf("Vamos distribuir seu dinheiro de maneira a usarmos a menor quantidade de notas possivel.");
    printf("\nPor favor, digite a quantidade total de dinheiro (sem centavos) em sua conta: ");
    scanf("%d", &dinheiro);

    onca = dinheiro/50;
    aux1 = dinheiro%50;

    garca = aux1/5;

    bFlor = aux1%5;

    printf("\nInfelizmente dispomos apenas de notas de 50, 5 e 1 real.\n");
    printf("\nSeu dinheiro(R$%d,00) sera distribuido em %d nota(s) de 50 reais, %d nota(s) de 5 reais e %d nota(s) de 1 real.", dinheiro, onca, garca, bFlor);

    return 0;
}
