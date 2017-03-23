#include <stdio.h>

typedef struct{
    int dia, mes, ano;
} Data;

typedef struct{
    char nome[20];
    char cargo[20];
    char departamento[20];
    float salario;
    Data data_adm;
} Funcionarios;

void le_data(Data *data){
    printf("Data de admissao: ");
    scanf("%d %d %d", &data->dia, &data->mes, &data->ano);
}

int main(void){
    Funcionarios funcs[10];
    int i;
    float total = 0, media_salarial;

    for(i = 0; i < 10 ; i++){
        printf("Nome do funcionario: ");
        scanf(" %[^\n]s", funcs[i].nome);
        printf("Cargona na empresa: ");
        scanf(" %[^\n]s", funcs[i].cargo);
        printf("Departamento na empresa: ");
        scanf(" %[^\n]s", funcs[i].departamento);
        printf("Salario na empresa: ");
        scanf("%f", &funcs[i].salario);
        le_data(&funcs[i].data_adm);
        total += funcs[i].salario;
        printf("\n");
    }

    media_salarial = total / 10 ;
    printf("Empregados que ganham acima da media\n");

    for(i = 0; i < 10; i++){
        if(funcs[i].salario > media_salarial)
            printf("%s\n", funcs[i].nome);
    }

    return 0;
}
