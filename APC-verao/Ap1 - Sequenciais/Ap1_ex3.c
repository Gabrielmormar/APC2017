#include <stdio.h>

int main(void){
	float pi = 3.14, vol;
	int raio, h;

	printf("Insira o raio do cilindro: "); scanf("%d", &raio);

	printf("Insira a altura do cilindro: "); scanf("%d", &h);

	vol = pi*(raio*raio)*h;

	printf("Volume do cilindro: %.2f\n", vol);

	return 0;
}