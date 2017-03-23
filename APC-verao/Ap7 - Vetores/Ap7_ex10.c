#include <stdio.h>

int main(void) {
  float v1[7], v2[7], v3[7], media = 0;
  int i, aprovados = 0, reprovados = 0;

  for(i = 0; i < 7; i++) {
    printf("Digite as notas: ");
    scanf("%f %f", &v1[i], &v2[i]);
    v3[i] = (v1[i] + v2[i]) / 2;
  }

  for(i = 0; i < 7; i++){
    printf("aluno %d | %.1f %.1f  | %2.f\n", i+1, v1[i], v2[i], v3[i]);
  }

  for(i = 0; i < 7; i++){
    media += v3[i];
  }

  for(i = 0; i < 7; i++){
      if(v3[i] >= 7)
        aprovados++;
      else
        reprovados++;
  }
  printf("Media = %.2f\n", media/7);
  printf("Aprovados: %d\n", aprovados);
  printf("reprovados: %d\n", reprovados);
  return 0;
}
