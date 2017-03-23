#include <stdio.h>

int Multiplicacao(int x, int y){
	int soma = 0;
	while(x >= 1){
		if(x % 2 > 0)
			soma += y;
		x /= 2;
		y *= 2;
	}
	
	printf("Soma = %d\n", soma);
}

int main(void){
	int num1, num2, i;

	for(i = 0; i < 10; i++){
	
	printf("Digite dois numeros positivos e inteiros: ");
	scanf("%d %d", &num1, &num2);

	Multiplicacao(num1, num2);
	
	}

	return 0;
}