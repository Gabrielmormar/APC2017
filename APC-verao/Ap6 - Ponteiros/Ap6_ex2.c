#include <stdio.h>

int MaiorMenor(int *n1, int *n2, int *n3){
	int maior = 0, menor = 0, aux = 0;
	aux = *n1;
	
	if(*n1 > *n2 && *n1 > *n3){
        maior = *n1;
    	*n1 = maior;
    }
    else{
        if(*n2 > *n1 && *n2 > *n3){
            maior = *n2;
            *n1 = maior;
        }

        else{
            maior = *n3;
            *n1 = maior;
        }
    }
    //MENOR
    if(aux < *n2 && aux < *n3){
    	menor = aux;
    	*n2 = menor;
    }
    else{
    	if(*n2 < aux && *n2 < *n3){
    		menor = *n2;
    		*n2 = menor;
    	}
    	else{
    		menor = *n3;
    		*n2 = menor;
    	}
    }
}

int main(void){
	int x = 0, y = 0, z = 0;

	printf("Informe um: ");
	scanf("%d", &x);

	printf("Informe um: ");
	scanf("%d", &y);

	printf("Informe um: ");
	scanf("%d", &z);

	MaiorMenor(&x,&y,&z);
	printf("Maior Numero %d, Menor Numero %d\n", x, y);

	return 0;
}