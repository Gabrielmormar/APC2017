#include <stdio.h>

float Media(float n1, float n2, float n3){
	float media;
	media = ((n1*3)+(n2*3)+(n3*4))/10;

	return media;
}

void Leitura(float *n1, float *n2, float *n3){
	printf("Informe as notas: ");
	scanf("%f %f %f", n1, n2, n3);
}

int main(void){
	int num_alunos, i;
	float n1, n2, n3;

	printf("Informe o numero de alunos: ");
	scanf("%d", &num_alunos);

	for(i = 0; i < num_alunos; i++){
		Leitura(&n1, &n2, &n3);
		printf("Media do aluno %d: %.2f\n", i+1, Media(n1,n2,n3));

	}
}