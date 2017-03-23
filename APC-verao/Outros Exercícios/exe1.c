#include <stdio.h>

int main(void)
{	
	int num;
	printf("Digite um numero: "); scanf("%d", &num);
	printf("Sucessor do numero %d é: %d\n", num, num+1);
	printf("Antecessor do numero %d é: %d\n", num, num-1);

	return 0;
}