#include <stdio.h>

int main(void) {
  float v1[7], v2[7], v3[7];
  int i;

  for(i = 0; i < 7; i++) {
    printf("Digite as notas: ");
    scanf("%f %f", &v1[i], &v2[i]);
    v3[i] = (v1[i] + v2[i]) / 2;
  }

  for(i = 0; i < 7; i++){
    printf("aluno %d | %.1f %.1f  | %2.f\n", i+1, v1[i], v2[i], v3[i]);
  }

  return 0;
}
