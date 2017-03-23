#include<stdio.h>
int cont = 0;

int fibo(int x){
    cont += 1;
    if(x <= 2)
        return x;
    else
        return fibo(x-1) + fibo(x-2);
}

int main(void){
    int num;

    printf("Digite um numero: ");
    scanf("%d", &num);

    printf("Resultado = %d\n", fibo(num));
    printf("Contador = %d", cont);
    return 0;
}
