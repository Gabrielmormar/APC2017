#include <stdio.h>

typedef struct{
    int cod;
    char depto[30], nome[30];
    float sal;
} tipoDadosFunc;

int main(void){
    FILE *fp;
    FILE *fb;
    tipoDadosFunc funcionario;
    char nomearq[30] = "arquivo.bin", nomearq2[30] = "arquivo2.bin";
    int codigo, achou;

    printf("Digite o codigo a ser pesquisado \n");
    scanf("%d", &codigo);

    achou = 0;
    fb = fopen(nomearq2,"wb");
    fp = fopen(nomearq,"rb");

    while (fread(&funcionario, sizeof(tipoDadosFunc), 1, fp) != 0 && achou == 0){
        if (funcionario.cod == codigo){
            achou = 1;
            printf("encontrado. Novo salario? \n");
            scanf("%f", &funcionario.sal);
            fwrite(&funcionario, sizeof(tipoDadosFunc), 1, fb);

        }
    }
    fclose(fb);
    fclose(fp);

    if (achou == 0){
        printf("Codigo  nao encontrado. \n");
    }

    fb = fopen(nomearq2,"rb");
    while(fread(&funcionario, sizeof(tipoDadosFunc), 1, fb) != 0){
        printf("Salario novo: %.2f \n", funcionario.sal);
    }
    fclose(fb);
    return 0;
}
