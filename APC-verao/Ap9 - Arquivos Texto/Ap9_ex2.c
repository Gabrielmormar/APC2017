#include <stdio.h>

int main(void){

	FILE *arq;
	char nome[25];

	printf("nome do arquivo(.txt): ");
	scanf(" %s", nome);
	arq = fopen(nome, "w");

	int n_alunos = 0, i;
	float n1, n2, n3;
	char nome_aluno[30];
	int codigo;

	printf("Numero de alunos: ");
	scanf("%d", &n_alunos);

	getchar();

	for(i = 0; i < n_alunos; i++){
		n1 = n2 = n3 = 0;

		printf("Digite o nome do aluno(%d): ",i+1);
		scanf("%[^\n]s", nome_aluno);

		printf("Digite o codigo do aluno(%d): ", i+1);
		scanf("%d", &codigo);

		printf("Digite as notas do aluno(%d): ", i+1);
		scanf("%f %f %f", &n1, &n2, &n3);
		
		fprintf(arq, "%5d %.2f %.2f %.2f %s\n", codigo, n1, n2, n3, nome_aluno);
		getchar();
	}

	fclose(arq);

	return 0;
}