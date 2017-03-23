#include <stdio.h>

int main(void){

	int x, k, res = 1, i, j;

	for(i = 0; i < 4; i++){

		do{
			printf("Informe o x: ");
			scanf("%d", &x);
		} while(x <= 0);

		do{
			printf("Informe o k: ");
			scanf("%d", &k);
		} while(k < 0);

		for(j=1;j<=k;j++){ 
			res=x*res; 
		} 

		printf("Potenciao: %d\n", res);
		res = 1;
	}


	return 0;
}