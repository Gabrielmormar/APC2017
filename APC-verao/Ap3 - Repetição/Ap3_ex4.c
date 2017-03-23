#include <stdio.h>

int main(void){
	int i, j, aux;

	for(i = 10; i < 21; i++){
		for(j = 1; j < 11; j++){
			printf("%dx%d = %d\n", i, j, i*j);
		}
		printf("\n");
	}
}