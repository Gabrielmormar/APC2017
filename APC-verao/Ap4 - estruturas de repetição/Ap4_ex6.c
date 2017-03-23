#include <stdio.h>

int main(void){

	float x, k, res = 1, i, j, aux;

	for(i = 0; i < 4; i++){

		//do{
			printf("Informe o x: ");
			scanf("%f", &x);
		//} while(x <= 0);

		//do{
			printf("Informe o k: ");
			scanf("%f", &k);
		//} while(k < 0);
		aux = k;

		if(k < 0)
			k *= -1;
		
		for(j=1;j<=k;j++){ 
			res=x*res; 
		} 

		if(aux < 0)
			printf("Potenciao: %.3f\n", 1/res);
		else
			printf("Potenciao: %.3f\n", res);
		
		res = 1;
	}


	return 0;
}