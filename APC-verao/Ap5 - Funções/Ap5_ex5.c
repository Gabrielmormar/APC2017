#include <stdio.h>

float Maior(float x, float y, float z){

	if(x > y && x > z)
		printf("Maior %.2f\n", x);
	else
		if(y > x && y > z)
			printf("Maior %.2f\n", y);
		else
			printf("Maior %.2f\n", z);

}

int main(void){
	float x, y, z;
	printf("Digite 3 numeros reais: ");
	scanf("%f %f %f", &x, &y, &z);

	Maior(x, y, z);

	return 0;
}