#include<stdio.h>

int soma(int x){
    if(x == 1)
        return 1;
    else
        return x + soma(x-1);
}

int main(void){
    int num;

    printf("digite um numero: ");
    scanf("%d", &num);

    printf("Soma de N primeiros numeros = %d", soma(num));

    return 0;
}
