#include <stdio.h>
float Peso(float alt, char sex);

int main(void)
{
	char sex;
	int num_pessoas,i;
	float alt;
	

	printf("Insira o numero de pessoas: ");
	scanf("%d", &num_pessoas);

	for(i = 0; i < num_pessoas; i++){

		printf("INsira o sexo: ");
		scanf(" %c", &sex);
		
		printf("Insira a altura da pessoa: ");
		scanf("%f", &alt);

				
		printf("Peso ideal: %.2f\n", Peso(alt, sex));
	}



}

float Peso(float alt, char sex){
	float peso;

	if((sex == 'f') || (sex == 'F')){
		peso = ((62.1 * alt) - 44.7);
	}
	else{
		peso = ((72.7 * alt) - 58);
	}
	return peso;
}