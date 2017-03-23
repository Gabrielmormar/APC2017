/*TRABALHO DE ALGORITMOS*/
#include <stdio.h>
#include <ctype.h>

int sstrlen(char *s){
  int i = 0;
  while (s[i] != '\0') {
    i++;
  }
  return i;
}

char *strcpy(char *dest, char *orig){
  int i = 0;
  while(dest[i] = orig[i])
    i++;
  return dest;
}

int strcmp(char *s1, char *s2){
  int i = 0;
  while(s1[i] == s2[i] && s1[i] != '\0')
    i++;
  return ((unsigned char) s1[i] - (unsigned char) s2[i]);
}

void underscore(char *s1, int tam){
  int i;
  for(i = 0; i < tam; i++){
    s1[i] = '_';
    s1[i+1] = '\0';
  }
}

void VerificaAlfa(char *s1, char c){
  int i;
  for(i = 0; s1[i] != '\0'; i++){
      if(s1[i] == c)
          s1[i] = '-';
  }
}

void VerificaAlvo(char *s1, char *s2, char c, int *chances){
    int i, flag = 0;
    for(i = 0; i < sstrlen(s1); i++){
        if(s1[i] == c){
            s2[i] = c;
            flag = 1;
        }
    }
    if(flag == 0){
        *chances -= 1;
    }
}

int main(void){
    char palavra_alvo[21], palavra_decifrada[21];
    char escolha, res;
    int pontos_total = 0, continuar = 0, pontos, chances = 6, perdeu = 0, i;
    FILE *fp;
    fp = fopen("palavras.txt", "r");

    while(fscanf(fp,"%s",palavra_alvo) > 0 && perdeu == 0 && continuar == 0){
        fscanf(fp,"%d", &pontos);
        chances = 6;
        underscore(palavra_decifrada,sstrlen(palavra_alvo));
        char alfabeto[27] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','\0'};

        while(chances > 0){
            printf("==============================================================================\n");
            printf("\nJogo da Forca!!!\n");
            printf("Pontuaçao Acumulada: %d\n", pontos_total);
            printf("Pontuaçao da Palavra: %d\n\n", pontos);

            printf("1-cabeça, 2-tronco, 3-braço esquerdo, 4-braço direito, 5-perna direita, 6-perna esquerda\n");

            if(chances < 6){
              for(i = 0; i < 6 - chances; i++){
                  printf("%d ", i+1);
              } printf("\n\n");
            }

            printf("%s\n\n", palavra_decifrada);
            printf("%s\n\n", alfabeto);

            //Digita o caractere
            printf("Escolha uma das letras do alfabeto: ");
            scanf(" %c", &escolha);
            escolha = toupper(escolha);

            while(isdigit(escolha) != 0 || isalpha(escolha) == 0){
              printf("Digite um caractere valido: ");
              scanf(" %c", &escolha);
              escolha = toupper(escolha);
            }

            VerificaAlfa(alfabeto, escolha);
            VerificaAlvo(palavra_alvo, palavra_decifrada, escolha, &chances);
            printf("chances: %d\n", chances);

            pontos = chances*5;

            if(strcmp(palavra_alvo, palavra_decifrada) == 0){
                chances = 0;
                pontos_total += pontos;
                printf("Parabens, voce acertou a palavra!!!\n");
            } else{
                if(strcmp(palavra_alvo, palavra_decifrada) != 0 && chances == 0){
                    perdeu = 1;
                    printf("Voce nao acertou, tente novemente!\n");
                }
            }

          }

          printf("Desejar continuar: ");
          scanf(" %c", &res);
          res = toupper(res);

          while(res != 'S' && res != 'N'){
              printf("Desejar continuar (S/N): ");
              scanf(" %c", &res);
              res = toupper(res);
          }

          if(res == 'S' || res == 's'){
              continuar = 0;
          } else{
                continuar = 1;
            }

    }
    fclose(fp);
    return 0;
}
