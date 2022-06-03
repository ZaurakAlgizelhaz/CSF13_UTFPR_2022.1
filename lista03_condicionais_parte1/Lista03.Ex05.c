/*5. Fa�a um programa que dados os coeficientes (a,b e c) de uma equa��o do 2o grau, calcule e imprima suas ra�zes (caso
a equa��o possua ra�zes imagin�rias, o programa n�o deve imprimir nada).*/

#include <stdio.h>
#include <math.h>

int main()
{
	float a, b, c, delta, x1, x2;

	printf("Digite os coeficientes da equacao de segundo grau: \na: ");
	scanf("%f", &a);

	printf("b: ");
	scanf("%f", &b);

	printf("c: ");
	scanf("%f", &c);

	delta = b*b - 4*a*c;
	x2 = sqrt(delta);

	if(delta>=0)
  	{
    	x1 = (-b+sqrt(delta))/(2*a);
    	x2 = (-b-sqrt(delta))/(2*a);
    	printf("\nAs raizes desta equacao sao %.2f e %.2f", x1, x2);
  	}
	else
	{
  	printf("\nFim do programa.");
	}

	return 0;
}
