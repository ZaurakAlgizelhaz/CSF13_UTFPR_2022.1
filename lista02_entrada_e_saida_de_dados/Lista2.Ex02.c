/*2. Modifique o programa anterior para imprimir tamb�m os valores de n1 e n2 e rode novamente. Aten��o!!! Voc� deve
considerar que est� correto somente quando n�o houver nenhum aviso (warning) nem erro (error).
O que acontece se voc� eliminar os comandos de leitura (scanf) do programa e tentar imprimir o conte�do das vari�veis
mesmo assim? Compile, rode e veja as mensagens e resultados.*/

#include <stdio.h>

int main()
{
    float n1, n2, aux;

    printf("Digite o primeiro valor: ");
    scanf("%f", &n1);
    printf("\nDigite o segundo valor: ");
    scanf("%f", &n2);

    aux=n1+n2;

    printf("\n\nO resultado da soma de %.2f e %.2f eh: %.2f .\n", n1, n2, aux);

    //Eliminar os "scanf" fez com que o programa assumisse valor 0 para todas as vari�veis.

    return 0;
}
