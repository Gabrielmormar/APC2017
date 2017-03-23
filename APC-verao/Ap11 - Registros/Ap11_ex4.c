#include<stdio.h>

typedef struct{
    int codigo;
    char nome[20];
}Tabela;

int main(void){

    Tabela profissoes[20];
    int tam, cod, i;

    printf("Digite o tamanho da tabela: ");
    scanf("%d", &tam);

    for(i = 0; i < tam; i++){
        printf("Codigo: ");
        scanf("%d", &profissoes[i].codigo);
        printf("Nome da profissao: ");
        scanf(" %[^\n]s", profissoes[i].nome);
        printf("\n");
    }

    printf("Codigo da profissao que deseja procurar: ");
    scanf("%d", &cod);
    printf("\n");
    for(i = 0; i < tam; i++){
        if(cod == profissoes[i].codigo)
            printf("Nome da profissao: %s", profissoes[i].nome);
    }

    return 0;
}

