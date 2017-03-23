#include <stdio.h>

void Verifica(int *M[][100], int m, int n){
    int i, j, aux, cont = 0, cont1 = 0, i2 = 0, j2 = 0;

    while(cont == 0){
        aux = M[i2][j2];
        for(i = 0; i < m; i++){
            for(j = 0; j < n; j++){
                if(aux == M[i][j])
                    cont++;
            }
        }
        j2++;
        if(j2 == n){
            j2 = 0;
            i2++;
        }
    }
    printf("O elemento %d repetiu %d", aux, cont);
}

void Leitura(int *M[][100], int m, int n){
    int i, j;
    for(i = 0; i < m; i++){
        for(j = 0; j < n; j++){
            printf("Valor da posiçaoM[%d][%d]: ", i+1, j+1);
            scanf("%d", &M[i][j]);
        }
    }
}

int main(void){
    int M[100][100], m, n;

    printf("Coloque o numero de linhas da matriz: ");
    scanf("%d", &m);

    printf("Coloque o numero de colunas da matriz: ");
    scanf("%d", &n);

    leitura(M, m, n);
    verificar(M, m, n);

    return 0;
}
