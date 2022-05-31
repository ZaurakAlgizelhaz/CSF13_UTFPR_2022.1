/*5. Implemente um programa que leia 2 valores inteiros e armazene-os nas variáveis i1 e i2. Calcule a divisão de i1 por i2
atribuindo o seu resultado na variável divis e o resto da divisão entre i1 e i2, atribuindo o seu resultado na variável
rest. Verifique os resultados para os seguintes valores fornecidos pelo teclado: i1=10 e i2=5 e depois i1=12 e i2=5.
Você consegue explicar a diferença?*/

#include <stdio.h>

int main()
{
    int i1, i2, divis, rest;

    printf("Digite o primeiro valor: ");
    scanf("%d", &i1);

    printf("\nDigite o segundo valor: ");
    scanf("%d", &i2);

    divis = i1 / i2;

    rest = i1 - (i2*divis);

    printf("\n\nO quociente eh %d, e o resto eh %d", divis, rest);

    return 0;

    // Utilizando valores inteiros não há nenhuma diferença além de existir ou não resto na divisão.
}
