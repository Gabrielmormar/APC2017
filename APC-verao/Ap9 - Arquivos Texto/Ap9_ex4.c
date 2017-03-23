#include <stdio.h>

int main(void){
	FILE *fp;
	char nome[25];

	printf("nome do arquivo(.txt): ");
	scanf(" %s", nome);
	fp = fopen(nome, "r");

	if(fp == NULL){
	  	printf("Arquivo nao pode ser aberto\n");
	  	return 0;
	}

	fclose(fp);

	fp = fopen(nome, "a+");

	int codigo;
	float n1, n2, n3;

	while(fscanf(fp, "%d %f %f %f %[^\n]s\n", &codigo, &n1, &n2, &n3, nome) != EOF){
		fprintf(fp, "%d %f %f %f %[^\n]s\n", codigo, n1, n2, n3, nome);
	}
}