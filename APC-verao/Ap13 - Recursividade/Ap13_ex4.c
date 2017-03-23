#include<stdio.h>

int mdc(int x, int y){
    if (x%y == 0)
        return y;
    else
        return mdc(y,x % y);
}

int main(void){
    int num1, num2;

    printf("Digite dois numeros: ");
    scanf("%d %d", &num1, &num2);

    printf("MDC de %d e %d = %d", num1, num2, mdc(num1,num2));
    return 0;
}
