#include <stdio.h>

int main(void){
	int a = 0, b = 0, c = 0;

	printf("Digite o lado(1) do triangulo: ");
	scanf("%d", &a);
	while(a <= 0){ //GARANTE VALORES SEMPRE POSITIVOS
		printf("Digite o lado(1) do triangulo: ");
		scanf("%d", &a);
	}

	printf("Digite o lado(2) do triangulo: ");
	scanf("%d", &b);
	while(b <= 0){ //GARANTE VALORES SEMPRE POSITIVOS
		printf("Digite o lado(2) do triangulo: ");
		scanf("%d", &b);
	}

	printf("Digite o lado(3) do triangulo: ");
	scanf("%d", &c);
	while(c <= 0){ //GARANTE VALORES SEMPRE POSITIVOS
		printf("Digite o lado(3) do triangulo: ");
		scanf("%d", &c);
	}

	if((a + b) > c || (c + b) > a || (a + c) > b){
		printf("triangulo: ");

		if(a > b && a > c){
			if((a*a) == ((b*b) + (c*c)))
				printf("retangulo \n");
		} else{
   			if(b>a && b>c)
        		if((b*b) == ((a*a) + (c*c)))
				printf("retangulo \n");
    		else
        		if((c*c) == ((a*a) + (c*c)))
				printf("retangulo \n");
        }
        printf("\n");
	} else
		printf("Não eh um triangulo!!!\n");


}