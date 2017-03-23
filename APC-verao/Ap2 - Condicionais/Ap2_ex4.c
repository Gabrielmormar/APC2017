#include <stdio.h>

int main(void){
	int x, y, H, L, a, b;

	printf("Informe o ponto x: ");
	scanf("%d", &x);

	printf("Informe o ponto y: ");
	scanf("%d", &y);

	printf("Informe a altura do retangulo: ");
	scanf("%d", &H);

	printf("Informe a largura do retangulo: ");
	scanf("%d", &L);

	printf("Informe outro ponto x: ");
	scanf("%d", &a);

	printf("Informe outro ponto y: ");
	scanf("%d", &b);

	if(a >= x && a <= H && b >= L && b <= L)
		printf("O ponto esta dentro do retangulo\n");
	else if(a == x && b <= L)
		printf("Esta sobre a linha\n");
	else if()



}