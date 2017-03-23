#include <stdio.h>

int main(void){
	int i, n, t, fat;

	printf("Informe o numero de vezes que quer calcular: ");
	scanf("%d", &t);

	for(i = 0; i < t; i++){
		printf("Informe um numero: ");
		scanf("%d", &n);

	if(n > 0){
		for(fat = 1; n > 1; n = n - 1)
		fat = fat * n;
 	}

 	else
 		fat = 1;
	printf("Fatorial calculado: %d\n", fat);

	}

	return 0;
} 