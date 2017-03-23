#include <stdio.h>

int main(void) {

	int num1, num2, media;

	printf("Informe o primeiro numero: ");
	scanf("%d", &num1);

	printf("Informe o segundo numero: ");
	scanf("%d", &num2);

	media = (num1 + num2) / 2;

	printf("Media dos numeros : %d\n", media);

	return 0;
}