/*6. Refa�a o exerc�cio anterior para imprimir mensagem ra�zes imagin�rias caso as ra�zes sejam imagin�rias. Caso a
equa��o possua uma �nica ra�z o programa tamb�m deve indicar isso (ou seja que a raiz � �nica).*/

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
