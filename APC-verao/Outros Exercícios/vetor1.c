#include <stdio.h>

int main(void){
	int v1[25], v2[25], v3[50], i, j;

	for(i = 0; i < 2; i++){
		printf("Vetor %d: ", i+1); 
		scanf("%d", &v1[i]);
	}
	//i = 0;
	for(i = 0; i < 2; i++){
		printf("Vetor %d: ", i+1); 
		scanf("%d", &v2[i]);
	}
	//i = 0;
	for(i = 0; i < 2; i++){
		v3[i] = v1[i];
	}
	//i = 0;
	for(i = 2; i < 4; i++){
		j = 0;
		v3[i] = v2[j];
		j++;
	}
	//i = 0;
	for(i = 0; i < 4; i++){
		printf("Vetor novo: %d", v3[i]);
	}


}