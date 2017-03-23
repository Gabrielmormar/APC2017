#include <stdio.h>

int main(void)
{
	float nota1, nota2, nota3, media;

	printf("Digite a nota 1: "); scanf("%f", &nota1);
	printf("Digite a nota 2: "); scanf("%f", &nota2);
	printf("Digite a nota 3: "); scanf("%f", &nota3);

	media = (nota1*1 + nota2*3 + nota3*4)/8;

	printf("Media ponderada: %.2f\n", media);

	return 0;
}