#include <stdio.h>
#include <math.h>

int main(void)
{
	int a, b, c, delta;
	float raiz1, raiz2;

	printf("Informe o valor de a na equação: ");
	scanf("%d", &a);

	printf("Informe o valor de b na equação: ");
	scanf("%d", &b);

	printf("Informe o valor de c na equação: ");
	scanf("%d", &c);

	delta = (b*b)- 4*a*c;

	if(delta >= 0){
		raiz1 = (-b + sqrt(delta))/(2*a);
		raiz2 = (-b - sqrt(delta))/(2*a);
		printf("A x1=%.2f e x2=%.2f\n", raiz1, raiz2);
	} else
		printf("Nenhuma raiz na equação!\n");

	return 0;
}