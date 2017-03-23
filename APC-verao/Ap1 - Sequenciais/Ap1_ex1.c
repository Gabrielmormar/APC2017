#include <stdio.h>

int main(void){

	int a, b, aux;

	printf("Informe um numero: ");
	scanf("%d", &a);

	printf("Informe outro numero: ");
	scanf("%d", &b);

	aux = b;
	b = a;
	a = aux;

	printf("Numeros %d e %d\n", a, b);

	return 0;
}