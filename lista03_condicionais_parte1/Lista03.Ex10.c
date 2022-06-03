#include <stdio.h>

int main ()
{
    int n1, n2, n3, aux;

    if (n2>=n3)
    {
        aux = n2 ;
        n2 = n3 ;
        n3 = aux ;
    }

    if ( n1 >= n2 )
    {
        aux = n1 ;
        n1 = n2 ;
        n2 = aux ;

        if (n2>=n3)
        {
        aux = n2 ;
        n2 = n3 ;
        n3 = aux ;
        }
    }

    printf ("%d %d %d\n", n1 , n2 , n3 );
    return 0;
}

/*Sem executar o programa, responda:
• Qual será a saída se atribuirmos no início os valores 1, 2 e 3 a n1, n2 e n3, respectivamente?
1, 2, 3

• Qual será a saída se atribuirmos no início os valores 20, 10 e 30 a n1, n2 e n3, respectivamente?
10, 20, 30

• Qual será a saída se atribuirmos no início os valores 5*5, n1/2 e n2+1 a n1, n2 e n3, respectivamente?
12, 13, 25

• O que o programa faz, exatamente? Explique o funcionamento do algoritmo.
O programa organiza as entradas do menor para o maior. Uma variavel auxiliar "segura" o maior valor enquanto a n2 recebe o valor menor que está com n3,
em seguida, a variavel auxiliar atribui o valor maior ao n3, completando a troca. O programa realiza a iteração até um máximo de 3 vezes, para garantir
que o maior valor esteja em n3 e o menor deles em n1. */
