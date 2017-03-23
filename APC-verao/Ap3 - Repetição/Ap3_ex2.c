 #include <stdio.h>

int main(void){
	int i=0, aux=0, soma=0;

	for(i=0; i<10; i++){
		aux+=1;
		soma+=aux;
	}

	printf("Soma: %d\n", soma);

	return 0;
}