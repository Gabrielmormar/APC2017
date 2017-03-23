#include <stdio.h>

void Leitura(int v[], int n){
	int i;

	for(i = 0; i < n; i++){
		printf("Digite o numero: ");
		scanf("%d", &v[i]);
	}
}

void Mostrar(int v[], int n){
	int i, impares = 0, pares = 0;

	for(i = 0; i < n; i++){
		if(v[i] % 2 == 0)
			pares++;
		else
			impares++;
	}

	printf("Impares = %d Pares = %d\n", impares, pares);
}



int main(void){
	int v[20], n;

	printf("Quantidade de numeros: ");
	scanf("%d", &n);
	while(n > -1){
		Leitura(v,n);
		Mostrar(v,n);
		printf("Quantidade de numeros(max=20): ");
		scanf("%d", &n);
	}

	

	return 0;
}