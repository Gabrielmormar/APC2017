/*Universidade de Brasilia
Instituto de ciencias Exatas
Departamento de Ciencia da Computaçao

Algoritmos e Programaçao de Computadores

Aluno: Gabriel Morais Marreiros
Matricula: 16/0121256
Turma: VERAO
Versao do compilador: GCC 5.4.0 (Ubuntu 16.04)

Descriçao: Jogo da Forca*/
#include <stdio.h>
#include <ctype.h>

int sstrlen(char *s){ //CONTA A QUANTIDADE DE CARACTERES NUMA STRING
  int i = 0;
  while (s[i] != '\0') {
    i++;
  }
  return i;//RETORNA A QUANTIDADE DE CARACTERES
}

int strcmp(char *s1, char *s2){ // COMPARA STRINGS
  int i = 0;
  while(s1[i] == s2[i] && s1[i] != '\0')
    i++;
  return ((unsigned char) s1[i] - (unsigned char) s2[i]);
}

void underscore(char *s1, int tam){ // PREENCHE COM '_' O VETOR PARA SER DECIFRADO
  int i;
  for(i = 0; i < tam; i++){
    s1[i] = '_';//ADICIONA O underscore
    s1[i+1] = '\0';
  }
}

void VerificaAlfa(char *s1, char c){ // VERIFICA SE O ALFABETO JA FOI SELECIONADO
  int i;
  for(i = 0; s1[i] != '\0'; i++){
      if(s1[i] == c)
          s1[i] = '-';
  }
}

void VerificaAlvo(char *s1, char *s2, char c, int *chances){ // VERIFICA SE A LETRA DIGITADA FAZ PARTE DA PALAVRA ALVO
    int i, flag = 0;
    for(i = 0; i < sstrlen(s1); i++){
        if(s1[i] == c){
            s2[i] = c;
            flag = 1;
        }
    }
    if(flag == 0){
        *chances -= 1;//SE NAO FIZER PARTE DA STRING ALVO PERDE UMA CHANCE
    }
}

int main(void){
    char palavra_alvo[21], palavra_decifrada[21];
    char escolha, res;
    int pontos_total = 0, continuar = 0, pontos, chances = 6, perdeu = 0, i;
    FILE *fp;//CRIA O PONTEIRO PARA O ARQUIVO
    fp = fopen("palavras.txt", "r");//ABRE O ARQUIVO

    while(fscanf(fp,"%s",palavra_alvo) > 0 && perdeu == 0 && continuar == 0){
        fscanf(fp,"%d", &pontos);
        chances = 6;
        underscore(palavra_decifrada,sstrlen(palavra_alvo));
        char alfabeto[27] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','\0'};

        while(chances > 0){ // ENQUANTO TIVER CHANCES RODA O LOOP
            printf("==============================================================================\n");
            printf("\nJogo da Forca!!!\n");
            printf("Pontuaçao Acumulada: %d\n", pontos_total);
            printf("Pontuaçao da Palavra: %d\n\n", pontos);

            printf("1-cabeça, 2-tronco, 3-braço esquerdo, 4-braço direito, 5-perna direita, 6-perna esquerda\n");

            if(chances < 6){ // IMPRIME CADA PARTE DO CORPO
              for(i = 0; i < 6 - chances; i++){
                  printf("%d ", i+1);

              } printf("\n\n");
            }

            printf("%s\n\n", palavra_decifrada);
            printf("%s\n\n", alfabeto);

            //Digita o caractere
            printf("Escolha uma das letras do alfabeto: ");
            scanf(" %c", &escolha);
            escolha = toupper(escolha);//CONVERTE PARA MAIUSCULO

            while(isdigit(escolha) != 0 || isalpha(escolha) == 0){ //VERIFICA ENTRADA INVALIDA
              printf("Digite um caractere valido: ");
              scanf(" %c", &escolha);
              escolha = toupper(escolha);
            }

            VerificaAlfa(alfabeto, escolha);
            VerificaAlvo(palavra_alvo, palavra_decifrada, escolha, &chances);
            printf("Chances Restantes: %d\n", chances);

            pontos = (sstrlen(palavra_alvo)*10) - ((6 - chances) * 5);//QUANTIDADE DE PONTOS

            if(strcmp(palavra_alvo, palavra_decifrada) == 0){ // VERIFICA SE A PALAVRA DECIFRADA EH IGUAL A PALVRA ALVO
                chances = 0;
                pontos_total += pontos; //PONTUAÇAO DO JOGADOR
                printf("Palavra: %s\n", palavra_decifrada);
                printf("Parabens, voce acertou a palavra!!!\n");
                printf("Pontuaçao Acumulada: %d\n", pontos_total);

                printf("Desejar continuar (S/N): "); // VERIFICA SE O USUARIO QUER CONTINUAR
                scanf(" %c", &res);
                res = toupper(res); // CONVERTE PARA MAIUSCULO

                while(res != 'S' && res != 'N'){ // ENQUANTO A ENTRADA FOR INVALIDA, VERIFICA
                    printf("Desejar continuar (S/N): ");
                    scanf(" %c", &res);
                    res = toupper(res);
                }

                if(res == 'S') // SE A RESPOSTA FOR SIM CONTINUA O JOGO
                    continuar = 0;
                else
                    continuar = 1;

             }
             else{
                if(strcmp(palavra_alvo, palavra_decifrada) != 0 && chances == 0){
                    printf("\nForca ");
                    for(i = 0; i < 6 - chances; i++){ //IMPRIME A FORCA
                        printf("%d ", i+1);
                    } printf("\n");
                    perdeu = 1;
                    printf("Pontuaçao Acumulada: %d\n", pontos_total);
                    printf("Voce Nao Acertou!\n");
                }
            }

          }
    }
    fclose(fp);// FECHA O ARQUIVO
    getchar();// MANTEM ABERTO PARA VISUALIZAÇAO NO WINDOWS
    return 0;
}
