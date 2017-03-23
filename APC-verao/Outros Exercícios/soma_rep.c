#include <stdio.h>

int main(void)
{
	float soma, i, j;
	i = j = 1;

	do{
		soma += i/j;
		i += 2;
		j += 1;
	} while(i < 100 && j < 51);

	printf("Soma total: %.2f\n", soma);

	return 0;
}