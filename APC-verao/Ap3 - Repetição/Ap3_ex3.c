#include <stdio.h>

int main(void){
	int num_pessoas = 0, idade = 0, i;
	float media = 0;

	printf("Insira a quantidade de pessoas: ");
	scanf("%d", &num_pessoas);

	for(i = 0; i < num_pessoas; ++i){
		printf("Informe as idades: \n");
		scanf("%d", &idade);
		media += idade;
	}

	media /= num_pessoas;
	printf("Media das idade %.2f\n", media);
}