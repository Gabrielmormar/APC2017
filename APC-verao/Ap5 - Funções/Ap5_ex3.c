#include <stdio.h>

int pot(int x, int y){
	int i, j, res = 1;

	for(i = 1; i <= y; i++){
		res = x * res;
	}

	return res;
}

int main(void){
	int x, y;

	printf("Insira o valor de X: ");
	scanf("%d", &x);

	printf("Insira o valor de Y: ");
	scanf("%d",  &y);

	printf("O valor da potenciação eh %d\n", pot(x,y));

	return 0;
}