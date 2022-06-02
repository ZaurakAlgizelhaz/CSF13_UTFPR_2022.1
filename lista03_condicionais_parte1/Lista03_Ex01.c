/*1. OBI - Exercicio do Bondinho. A turma do colegio vai fazer uma excursao na serra e todos os alunos e monitores vao
tomar um bondinho para subir ate o pico de uma montanha. A cabine do bondinho pode levar 50 pessoas no maximo,
contando alunos e monitores, durante uma viagem ate o pico. Neste problema, dado como entrada o numero de alunos
e o nunero de monitores, vocu deve implementar um programa que diga se e possivel ou nao levar todos os alunos e
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
