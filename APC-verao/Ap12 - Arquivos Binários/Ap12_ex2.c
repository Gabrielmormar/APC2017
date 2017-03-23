#include<stdio.h>

typedef struct{
    int cod;
    char depto[30], nome[30];
    float sal;
} tipoDadosFunc;

int main(void){
    FILE *fp;
    int cont = 0;
    tipoDadosFunc funcionario;
    char nomearq[30] = "arquivo.bin";
    char res;
    fp = fopen(nomearq, "wb");
    do{
        printf("Codigo: ");
        scanf("%d", &funcionario.cod);
        printf("Depto: ");
        scanf(" %c", &funcionario.depto);
        printf("Nome: ");
        scanf(" %s", funcionario.nome);
        printf("Salario: ");
        scanf("%f", &funcionario.sal);
        fwrite(&funcionario, sizeof(tipoDadosFunc), 1, fp);
        scanf(" %c", &res);
    } while(res == 'S' || res == 's');
    fclose(fp);

    return 0;
}
