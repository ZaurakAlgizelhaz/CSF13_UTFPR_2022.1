/*6. Refaça o exercício anterior para imprimir mensagem raízes imaginárias caso as raízes sejam imaginárias. Caso a
equação possua uma única raíz o programa também deve indicar isso (ou seja que a raiz é única).*/

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

	if(delta>0)
  	{
    	x1 = (-b+sqrt(delta))/(2*a);
    	x2 = (-b-sqrt(delta))/(2*a);
    	printf("\nAs raizes desta equacao sao %.2f e %.2f", x1, x2);
  	}

	else if(delta<0)
	{
  	printf("\nO discriminante eh negativo, portanto as raizes sao imaginarias.");
	}

	else
	{
  	x1 = (-b)/(2*a);
  	printf("\nO discriminante eh neutro, portanto esta equacao tem apenas %.2f como raiz.", x1);
	}

	return 0;
}
