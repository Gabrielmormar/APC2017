#include <stdio.h>

int main(void){
	float nota1, nota2, nota3, media;

	printf("Insira a nota 1: ");
	scanf("%f", &nota1);

	printf("Insira a nota 2: ");
	scanf("%f", &nota2);

	printf("Insira a nota 3: ");
	scanf("%f", &nota3);

	media = (nota1 + nota2 + nota3) / 3;

	printf("Media final das notas: %.2f\n", media);

	return 0;
}