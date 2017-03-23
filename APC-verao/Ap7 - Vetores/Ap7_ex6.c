#include <stdio.h>

void Leitura(int v[]){
	int i;

	for(i = 0; i < 12; i++){
		printf("Digite a temperatura do mes %d: ", i+1);
		scanf("%d", &v[i]);
	}
}

void Verifica(int v[], int *menor, int *maior, int *mes_ma, int *mes_me){
	int i, maior1 = 0;

	for(i = 0; i < 12; i++){
		if(v[i] > maior1){
			*maior = v[i];
			*mes_ma = i+1;
			maior1 = v[i];
		} else{
			if(v[i] < v[i-1]){
				*menor = v[i];
				*mes_me = i+1;
			}
		}

	}
}

int main(void){
	int v[12], maior, menor, mes_ma, mes_me;

	Leitura(v);
	Verifica(v, &menor, &maior, &mes_ma, &mes_me);

	printf("menor = %d mes = %d  maior = %d mes = %d\n",menor, mes_me, maior, mes_ma);

	return 0;
}