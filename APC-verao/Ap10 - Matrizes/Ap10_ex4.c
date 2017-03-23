#include <stdio.h>

void Leitura(int M[][8]){
    int i, j;
    for(i = 0; i < 6; i++){
        for(j = 0; j < 8; j++){
            printf("Coloque o numero da matriz M[%d][%d]: ", i + 1, j + 1);
            scanf("%d", &M[i][j]);
        }
    }
}

void Verificar(int M[][8], int *C){
    int i, j, cont = 0;
    for(i = 0; i < 6; i++){
        for(j = 0; j < 8; j++){
            if(M[i][j] <= 0){
                cont++;
            }
        }
        C[i] = cont;
        cont = 0;
    }
}

void Mostrar(int *C){
    int i;
    for(i = 0; i < 6; i++){
        printf("Tem %d numeros negativos na linha %d\n", C[i], i + 1);
    }
}

int main(void){
    int M[6][8], C[6];
    Leitura(M);
    Verificar(M, C);

    Mostrar(C);
}
