/*2. Fa�a um programa que tendo como entradas (via teclado) a base e altura de um ret�ngulo, calcule o per�metro (2*base
+ 2*altura) e a �rea (base*altura) e imprima se o per�metro � maior que a �rea.*/

#include <stdio.h>

int main()
{
	float b, h, p2, area;

	printf("Digite um valor para a base do retangulo: ");
	scanf("%f", &b);

	printf("Digite um valor para a altura do retangulo: ");
	scanf("%f", &h);

	p2 = 2*b+2*h;
	area = b*h;


	if(p2>area)
    	printf("\nO perimetro eh maior que a area.");

	else
    	printf("\nO perimetro nao eh maior que a area.");


	return 0;
}
