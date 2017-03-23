#include <stdio.h>

int main(void)
{
	int ano, mes, dia;

	printf("Digite sua idade em anos, meses e dias: ");
	scanf("%d %d %d", &ano, &mes, &dia);
	printf("Total de dias: %d \n", ano*365+mes*30+dia);

	return 0;
}