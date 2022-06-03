/*1. OBI - Exerc�cio do Bondinho. A turma do col�gio vai fazer uma excurs�o na serra e todos os alunos e monitores v�o
tomar um bondinho para subir at� o pico de uma montanha. A cabine do bondinho pode levar 50 pessoas no m�ximo,
contando alunos e monitores, durante uma viagem at� o pico. Neste problema, dado como entrada o n�mero de alunos
e o n�nero de monitores, voc� deve implementar um programa que diga se � poss�vel ou n�o levar todos os alunos e
monitores em apenas uma viagem*/

#include <stdio.h>

int main()
{
    int aluno, monitor, total;

    printf("Qual a quantidade de alunos que subiu no bondinho?\n");
    scanf("%d", &aluno);

    printf("\nE quantos monitores?\n");
    scanf("%d", &monitor);

    total = aluno + monitor;

    if(total<=50)
        printf("\n\nCom menos de 50 pessoas, o bondinho vai tranquilo. Boa viagem! :)");
    else
        printf("\n\nO bondinho nao aguenta tanta gente!! (limite de 50 por vez)");


    return 0;
}
