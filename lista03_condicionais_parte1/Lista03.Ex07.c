/*7. Leia 2 valores reais (x e y), os quais representam as coordenadas de um ponto em um plano. A seguir, determine a
qual quadrante pertence o ponto. Analise também se está sobre um dos eixos cartesianos ou na origem (x = y = 0).*/

#include <stdio.h>

int main()
{
  float x, y;

  printf("Digite as coordenadas de um ponto. \nx: ");
  scanf("%f", &x);

  printf("y: ");
  scanf("%f", &y);

  if(x>0 && y>0)
	printf("O ponto (%.2f, %.2f) esta no primeiro quadrante.", x, y);

  else if (x<0 && y>0)
	printf("O ponto (%.2f, %.2f) esta no segundo quadrante.", x, y);

  else if (x<0 && y<0)
	printf("O ponto (%.2f, %.2f) esta no terceiro quadrante.", x, y);

  else if (x>0 && y<0)
	printf("O ponto (%.2f, %.2f) esta no quarto quadrante.", x, y);

  else if(x==0 && y==0)
	printf("O ponto (%.2f, %.2f) esta na origem", x, y);

  else if(x==0)
	printf("O ponto (%.2f, %.2f) esta no eixo y", x, y);

  else if(y==0)
	printf("O ponto (%.2f, %.2f) esta no eixo x", x, y);

  return 0;
}
