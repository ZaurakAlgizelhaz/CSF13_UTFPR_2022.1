/*5. Implemente um programa que leia 2 valores inteiros e armazene-os nas vari�veis i1 e i2. Calcule a divis�o de i1 por i2
atribuindo o seu resultado na vari�vel divis e o resto da divis�o entre i1 e i2, atribuindo o seu resultado na vari�vel
rest. Verifique os resultados para os seguintes valores fornecidos pelo teclado: i1=10 e i2=5 e depois i1=12 e i2=5.
Voc� consegue explicar a diferen�a?*/

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

    // Utilizando valores inteiros n�o h� nenhuma diferen�a al�m de existir ou n�o resto na divis�o.
}
