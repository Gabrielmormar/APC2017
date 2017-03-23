#include <stdio.h>

int SomaPares(int n){
	int i, soma = 0;

	for(i = 0; i <= n; i++){
		if(i % 2 == 0)
			soma += i;
	}

	printf("Soma dos pares = %d\n", soma);;
}

int main(void){
	int num;

	printf("Digite um numero: ");
	scanf("%d", &num);

	if(num < 0)
		printf("Numero nao eh positivo!!!\n");
	
	SomaPares(num);

	return 0;
}