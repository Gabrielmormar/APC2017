#include<stdio.h>
int pot(int x, int y){
    if(y == 0)
        return 1;
    else
        return x * pot(x, y-1);
}

int main(void){
    int x, y;

    printf("Digite a base e o expoente: ");
    scanf("%d %d", &x, &y);

    printf("Resultado = %d", pot(x, y));

    return 0;
}
