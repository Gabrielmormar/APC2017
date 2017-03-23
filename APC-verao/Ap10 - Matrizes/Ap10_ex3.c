#include <stdio.h>

void Leitura(int *MAT[][4]){
    int i, j;
    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            printf("Coloque o valor da posicao MAT[%d][%d]", i + 1, j + 1);
            scanf("%d", &MAT[i][j]);
        }
    }
}

void Verificar(int MAT[][4], int *contl, int *contc, int cont){
    int i, j;
    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            if(MAT[i][j] == 0){
                cont++;
            }
        }
        if(cont == 4){
            *contl+=1;
        }
        cont = 0;
    }
    for(j = 0; j < 4; j++){
        for(i = 0; i < 4; i++){
            if(MAT[i][j] == 0){
                cont++;
            }
        }
        if(cont == 4){
            *contc+=1;
        }
        cont = 0;
    }
}


int main(){
    int MAT[4][4], contl = 0, contc = 0, cont = 0;
    Leitura(MAT);
    Verificar(MAT, &contl, &contc, cont);

    printf("%d linhas nulas, %d colunas nulas", contl, contc);

    return 0;
}
