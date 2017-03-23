#include <stdio.h>
int main () {
 	int a, b;

 	printf("Informe o 1o valor: ");
 	scanf("%d", &a);
	
	printf("Informe o 2o valor: ");
 	scanf("%d", &b);
	if (a==b)
		printf("Numeros iguais=%d\n", a);
	else if(a > b)
		printf("O numero %d eh o maior\n", a);
	else if(a < b)
		printf("O numero %d eh o maior\n", b);

	 return(0);
}