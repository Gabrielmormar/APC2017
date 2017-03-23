#include <stdio.h>

int main(void)
{
	int dias_idade, anos, meses, dias;
	printf("Insira o numero de dias: ");
	scanf("%d", &dias_idade);

	if(dias_idade >= 365){
		anos = dias_idade/365;
		meses = (dias_idade - anos*365) / 30;
		dias = (dias_idade - anos*365) % 30;
	} else{
		meses = dias_idade/30;
		dias = dias_idade%30;
	}

	printf("Idade total: %d ano(s) %d mes(es) %d dia(s)\n", anos, meses, dias);

	return 0;

}