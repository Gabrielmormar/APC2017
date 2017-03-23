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

    fb = fopen(nomearq2,"wb");
    fp = fopen(nomearq,"rb");

    while (fread(&funcionario, sizeof(tipoDadosFunc), 1, fp) != 0){
        if (funcionario.sal < 1000){
            funcionario.sal = funcionario.sal * 1.30;
        }
        else if (funcionario.sal > 1000 && funcionario.sal < 5000){
            funcionario.sal = funcionario.sal * 1.20;
        }else{
            funcionario.sal = funcionario.sal * 1.10;
        }

        fwrite(&funcionario, sizeof(tipoDadosFunc), 1, fb);
    }

    fclose(fb);
    fclose(fp);

    fb = fopen(nomearq2,"rb");
    while(fread(&funcionario, sizeof(tipoDadosFunc), 1, fb) != 0){
        printf("Salario novo: %.2f \n", funcionario.sal);
    }
    fclose(fb);

    return 0;
}
