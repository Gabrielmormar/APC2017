#include<stdio.h>

int fat(int x){
    if(x == 0)
        return 1;
    else
        return x * fat(x - 1);
}

int main(void){
    int n;

    printf("Digite um numero: ");
    scanf("%d", &n);

    printf("Fatorial de %d = %d", n, fat(n));


    return 0;
}
