#include <stdio.h>

typedef struct{
    int matricula;
    float provas[3];
    float trabalhos[5];
} Aluno;

int main(void){
    Aluno alunos[10];
    FILE *fp;
    char nomearq = "arquivo.bin";
    fp = open(nomearq, "wb");
    int i, j, k;

    for(i = 0; i < 10; i++){
        scanf("%d", &aluno[i].matricula);
        for(i = 0; j < 3; j++){
            scanf("%f",&alunos[i].provas[j]);
        }
        for(k = 0; k < 5; k++){
            scanf("%f",&alunos[i].trabalhos[k]);
        }
    }
    fwrite(alunos, sizeof(Aluno), 10, fp);
    fclose(fp);

    fp = fopen(nomearq, "rb");
    fread(alunos, sizeof(Aluno), TAM, fp);
    for (i = 0; i < 10; i++){
        printf("Matricula: %i\n", alunos[i].matricula);
        for(j = 0;j < 3; j++){
            printf("Nota da prova %i: %i\n", j+1,alunos[i].provas[j]);
        }
        for(k = 0;k < 5; k++){
            printf("Nota do trabalho %i: %i\n", j+1, alunos[i].trabalhos[k]);
        }
    }
    fclose(fp);
    return 0;
}
