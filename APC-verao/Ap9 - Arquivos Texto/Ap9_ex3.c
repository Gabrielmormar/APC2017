#include <stdio.h>

int main(void){
	FILE *fp;
	FILE *fp2;
	char nome_arq1[30];
	char nome_arq2[30];

	printf("Nome do arquivo(.txt): ");
	scanf(" %s", nome_arq1);
	fp = fopen(nome_arq1, "r+");

	if(fp == NULL){
		printf("arquivo nao pode ser aberto!!!\n");
		return 0;
	}

	printf("nome do novo arquivo(.txt): ");
	scanf(" %s", nome_arq2);
	fp2 = fopen(nome_arq2, "w");

	int codigo;
	float n1, n2, n3, media;
	char nome[30];

	while(fscanf(fp, "%d %f %f %f %[^\n]\n", &codigo, &n1, &n2, &n3, nome) != EOF){
		fprintf(fp2, "%d %f\n", codigo, (n1+n2+n3)/3);
	}

	fclose(fp);
	fclose(fp2);

	return 0;

}