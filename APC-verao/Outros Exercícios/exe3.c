#include <stdio.h>

int main(void)
{
	float custo;
	printf("Insira o custo de fabrica: "); scanf("%f", &custo);
	
	custo = custo*0.73 + custo; 

	printf("Custo total ao consumidor: %.2f\n", custo);

	return 0;
}