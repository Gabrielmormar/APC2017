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

    fp = fopen(nomearq, "rb");
    while (fread(&funcionario, sizeof(tipoDadosFunc), 1, fp) != 0){
        printf("Codigo: %i\n", funcionario.cod);
        printf("Departamento: %s\n", funcionario.depto);
        printf("Nome: %s\n", funcionario.nome);
        printf("Salario: R$%.2f\n", funcionario.sal);
        printf("\n");
        cont++;
    }
    printf("Qtd. de funcionarios: %i \n", cont);
    getchar();
    fclose(fp);

    return 0;
}
