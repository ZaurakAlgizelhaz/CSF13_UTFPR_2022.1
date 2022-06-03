/*4. Modifique o programa anterior para que imprima qual dos dois é maior (perímetro ou área) ou se são iguais.*/

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

	else if(area>p2)
    	printf("\nA area eh maior que o perimetro.");

	else
    	printf("\nA area e o perimetro sao iguais.");


	return 0;
}
