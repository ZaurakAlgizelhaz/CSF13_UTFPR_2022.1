/*1. OBI - Exercício do Bondinho. A turma do colégio vai fazer uma excursão na serra e todos os alunos e monitores vão
tomar um bondinho para subir até o pico de uma montanha. A cabine do bondinho pode levar 50 pessoas no máximo,
contando alunos e monitores, durante uma viagem até o pico. Neste problema, dado como entrada o número de alunos
e o núnero de monitores, você deve implementar um programa que diga se é possível ou não levar todos os alunos e
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
