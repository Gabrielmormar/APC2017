#include <stdio.h>

int main(void){

	FILE *arq;
	char nome[25];

	printf("nome do arquivo(.txt): ");
	scanf(" %s", nome);
	arq = fopen(nome, "w");

	if(arq == NULL){
	  	printf("Arquivo nao pode ser aberto\n");
	  	return 0;
	}

	int n_alunos = 0, i;
	float n1, n2, n3;

	printf("Numero de alunos: ");
	scanf("%d", &n_alunos);

	for(i = 0; i < n_alunos; i++){
		n1 = n2 = n3 = 0;
		printf("Digite as notas do aluno %d: ", i+1);
		scanf("%f %f %f", &n1, &n2, &n3);
		fprintf(arq, "%.2f %.2f %.2f \n", n1, n2, n3);
	}
	
	fclose(arq);

	return 0;
}