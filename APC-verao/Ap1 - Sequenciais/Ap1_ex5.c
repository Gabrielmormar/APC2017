#include <stdio.h>
#include <math.h>

int main(void){
	int cateto1, cateto2, soma_catetos, hipotenusa;

	printf("Informe o valor do cateto 1: ");
	scanf("%d", &cateto1);

	printf("Informe o valor do cateto 2: ");
	scanf("%d", &cateto2);

	soma_catetos = (cateto1 * cateto1) + (cateto2 * cateto2);
	hipotenusa = sqrt(soma_catetos);

	printf("A hipotenusa vale: %d\n", hipotenusa);

	return 0;
}