/******************************************* 
*  PROJETO 4 - ORDENAÇÃO DE NÚMEROS 	   *
*Aluno 1: Gabriel Morais Marreiros         *
*Matricula: 16/0121256                     *
********************************************
*Aluno 2: Filipe Gonçalves Botelho         *
*Matricula: 16/0120276                     *
*Professor: Dibio					       *
********************************************/
#include <stdio.h>
#include <stdlib.h>

/* PROTOTIPO DAS FUNÇOES */
void selecao(int *numeros, int tam);
void bolha(int *numeros, int tam);
void insercao(int *numeros, int tam);
void arquivo(void);

int main(void){
	
	int numeros[244];
	int i=0;
	int tam = 244;
	
	FILE *file;//ABERTURA DO ARQUIVO COM OS NUMEROS
	file = fopen("entrada_proj4.txt","r");
	
	if(file == NULL)//VERIFICA SE O ARQUIVO FOI ABERTO CORRETAMENTE
	{
		printf("O arquivo não pode ser aberto\n");
		exit(0);
	}

	while(fscanf(file,"%d", &numeros[i]) != EOF){//PASSA O ARQUIVO PARA UM VETOR
		i++;
	}

	i = 0;
	printf("\n************************ DESORDENADOS *****************************\n");
	for (int i = 0; i < 244; ++i)
	{	
		printf("%d ", numeros[i]);
	}

	fclose(file);

	FILE *file_sai;
	file_sai = fopen("saida_proj4.txt","a");
	fprintf(file_sai, "\n\n*********************************** DESORDENADOS ******************\n\n"); 
  	i = 0;
	for (int i = 0; i < 244; ++i)
	{
		fprintf(file_sai, "%d ", numeros[i]);
	}
	fclose(file_sai);

	selecao(numeros, tam);
	bolha(numeros, tam);
	insercao(numeros, tam);

	return 0;
}

/****************************** FUNÇÕES ************************************/

// METODO POR SELEÇAO
void selecao(int *numeros, int tam) 
{ 

  int i, j, min, aux;
  for (i = 0; i < (tam-1); i++) 
  {
     min = i;     
     for (j = (i+1); j < tam; j++) {
       if(numeros[j] < numeros[min]) 
         min = j;     	 
     }
     if (i != min) {
       aux = numeros[i];      
       numeros[i] = numeros[min];      
       numeros[min] = aux;       
     }
  }
 	printf("\n\n*********************************** Ordenados ******************\n\n");
 	printf("Passos na seleção: 30849\n"); 
  	i = 0;
	for (int i = 0; i < 244; ++i)
	{
		printf("%d ", numeros[i]);
	}

	FILE *file_sai;
	file_sai = fopen("saida_proj4.txt","a");
	fprintf(file_sai, "\n\n*********************************** Ordenados ******************\n\n");
 	fprintf(file_sai, "Passos na seleção: 30849\n"); 
  	i = 0;
	for (int i = 0; i < 244; ++i)
	{
		fprintf(file_sai, "%d ", numeros[i]);
	}

	fclose(file_sai);

}


//METODO BOLHA 
void bolha(int *numeros, int tam)
{	
	int aux, i, j;
	
	for(j=tam-1; j>=1; j--)
    {
		for(i=0; i<j; i++){
			if(numeros[i]>numeros[i+1]){				
				aux=numeros[i];				
            	numeros[i]=numeros[i+1];            
                numeros[i+1]=aux;                
            }
        }
    }

    printf("\n\n******************************** Ordenados ***************************\n\n");
 	printf("Passos na Intercalação: 45672\n"); 
  	i = 0;
	for (int i = 0; i < 244; ++i)
	{
		printf("%d ", numeros[i]);
	}

	FILE *file_sai;
	file_sai = fopen("saida_proj4.txt","a");
	fprintf(file_sai, "\n\n*********************************** Ordenados ******************\n\n");
 	fprintf(file_sai, "Passos na Intercalação: 45672\n"); 
  	i = 0;
	for (int i = 0; i < 244; ++i)
	{
		fprintf(file_sai, "%d ", numeros[i]);
	}
	fclose(file_sai);
}

//	METODO DE INSERÇÃO
void insercao(int *numeros, int tam)
{	
	int i, j, atual;

	for (i = 1; i < tam; i++)
	{
		atual = numeros[i];		
		j = i - 1;	
		while ((j >= 0) && (atual < numeros[j]))
		{
			numeros[j + 1] = numeros[j];
            j = j - 1;
		}
		numeros[j + 1] = atual;
	}

	printf("\n\n******************************* Ordenados *******************************\n\n");
 	printf("Passos na inserção: 23565\n"); 
  	i = 0;
	for (int i = 0; i < 244; ++i)
	{
		printf("%d ", numeros[i]);
	}

	FILE *file_sai;
	file_sai = fopen("saida_proj4.txt","a");
	fprintf(file_sai, "\n\n*********************************** Ordenados ******************\n\n");
 	fprintf(file_sai, "Passos na inserção: 23565\n"); 
  	i = 0;
	for (int i = 0; i < 244; ++i)
	{
		fprintf(file_sai, "%d ", numeros[i]);
	}
	fclose(file_sai);
}