#include <stdio.h>

void Leitura(int v[]){
	int i;

	for(i = 0; i < 6; i++){
		printf("Digite o numero: ");
		scanf("%d", &v[i]);
	}
}

void Mostrar(int v[]){
	int i, impares = 0, pares = 0;

	for(i = 0; i < 6; i++){
		if(v[i] % 2 == 0)
			pares++;
		else
			impares++;
	}

	printf("Impares = %d Pares = %d\n", impares, pares);
}



int main(void){
	int v[6];

	Leitura(v);
	Mostrar(v);

	return 0;
}