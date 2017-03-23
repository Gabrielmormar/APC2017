#include <stdio.h>

void Leitura(int v[]){
	int i;

	for(i = 0; i < 9; i++){
		printf("Valor %d: ", i+1);
		scanf("%d", &v[i]);
	}
}

void Verifica(int v[]){
	int i;
	for(i = 0; i < 9; i++){
		if(v[i] < 0)
			printf("%d posiçao %d\n",v[i], i+1);
	}
}


int main(void){
	int v[9];
	Leitura(v);
	Verifica(v);

	return 0;
}