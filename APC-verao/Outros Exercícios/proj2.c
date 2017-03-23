/******************************************* 
*  PROJETO 2 - PROGRAMA IMPRESSAO DE SELOS *
*Aluno 1: Gabriel Morais Marreiros         *
*Matricula: 16/0121256                     *
********************************************
*Aluno 2: Filipe Gonçalves Botelho         *
*Matricula: 16/0120276                     *
*Professor: Dibio					       *
********************************************/
#include <stdio.h>
/* PROTOTIPO DAS FUNÇOES USADAS NO CODIGO */
void CalcSelo1(int x);
void CalcSelo2(int x);
void Impressao(void);
void BoasVindas(void);
float ValorCompra;//VARIAVEL GLOBAL 

int main(void){
	/*BOAS VINDAS AO USUARIO*/
	BoasVindas();	
	//CONVERTE PRA CENTAVOS
	ValorCompra *= 100;
	Impressao();/* IMPRESSAO FINAL */
}
	/* FUNÇOES  */
void BoasVindas(void){
	printf("--------------------------------------------------------------------------------\n");
	printf("\t\t\tBem-Vindo(a) a Fabrica de selos!\n");
	printf("--------------------------------------------------------------------------------\n");
	printf("-Primeiro insira o valor que vai querer em selos.\n");
	printf("-Depois veja as opçoes com as quantidades de selos.\n");
	printf("--------------------------------------------------------------------------------\n");
	printf("\t\tVeja a tabela com os tipos e valores dos selos:\n");
	printf("--------------------------------------------------------------------------------\n");
	printf("\t\t Tipos 			 Valores\n\n");
	printf("\t\tTipo 1 			  $0,01\n");
	printf("\t\tTipo 2 			  $0,02\n");
	printf("\t\tTipo 3 			  $0,05\n");
	printf("\t\tTipo 4 			  $0,10\n");
	printf("\t\tTipo 5 			  $0,25\n");
	printf("\t\tTipo 6 			  $0,50\n");
	printf("\t\tTipo 7 			  $1,00\n");
	printf("\t\tTipo 8 			  $2,00\n");
	printf("\t\tTipo 9 			  $5,00\n\n");
	/* PEDE A ENTRADA AO USUARIO, CASO SEJA INVALIDA RECOMEÇA O LOOP */
	while(ValorCompra <= 0){
		printf("Qual o valor em selos que o Senhor(a) vai querer: ");
		scanf("%f", &ValorCompra);
	}
}
//CALCULO 2 - IMPRESSAO COM A MAIOR VARIEDADE DE SELOS
void CalcSelo1(int x){
	//QUANTIDADE DE CADA SELO
	int Selode500 = 0;
	int Selode200 = 0;
	int Selode100 = 0;
	int Selode50 = 0;
	int Selode25 = 0;
	int Selode10 = 0;
	int Selode5 = 0;
	int Selode2 = 0;
	int Selode1 = 0;
	int total = x;
	//IMRIME A MAIOR VARIEDADE DE SELOS POSSIVEIS A PARTIR DO MAIOR VALOR
	while(total != 0){ 
		//COMEÇA A PARTIR DO MAIOR VALOR E VAI DECRESCENDO
		if(total >= 500){
			total -= 500;//SUBTRAI O SELO JA COMPRADO
			Selode500 += 1;//CASO RECOMECE O LOOP ADICIONA MAIS UM SELO DO MESMO TIPO
		}

		if(total >= 200){
			total -= 200;
			Selode200 += 1;
		}

		if(total >= 100){
			total -= 100;
			Selode100 += 1;
		}

		if(total >= 50){
			total -= 50;
			Selode50 += 1;
		}

		if(total >= 25){
			total -= 25;
			Selode25 += 1;
		}

		if(total >= 10){
			total -= 10;
			Selode10 += 1;
		}

		if(total >= 5){
			total -= 5;
			Selode5 += 1;
		}

		if(total >= 2){
			total -= 2;
			Selode2 += 1;
		}

		if(total >= 1){
			total -= 1;
			Selode1 += 1;
		}
	}
	//IMPRESSAO DE RESULTADOS 1
	printf("\t\t Tipos 			 Valores\n\n");
	printf("\t\tTipo 1 			  $0,01 x %d\n",Selode1);
	printf("\t\tTipo 2 			  $0,02 x %d\n",Selode2);
	printf("\t\tTipo 3 			  $0,05 x %d\n",Selode5);
	printf("\t\tTipo 4 			  $0,10 x %d\n",Selode10);
	printf("\t\tTipo 5 			  $0,25 x %d\n",Selode25);
	printf("\t\tTipo 6 			  $0,50 x %d\n",Selode50);
	printf("\t\tTipo 7 			  $1,00 x %d\n",Selode100);
	printf("\t\tTipo 8 			  $2,00 x %d\n",Selode200);
	printf("\t\tTipo 9 			  $5,00 x %d\n",Selode500);
}
//CALCULO 2 - IMPRESSAO COM A MENOR QUANTIDADE POSSIVEL DE SELOS
void CalcSelo2(int x){
	//VARIAVEIS COM A QUANTIDADE DE CADA SELO
	int Selode500 = 0;
	int Selode200 = 0;
	int Selode100 = 0;
	int Selode50 = 0;
	int Selode25 = 0;
	int Selode10 = 0;
	int Selode5 = 0;
	int Selode2 = 0;
	int Selode1 = 0;
	int total = x;

	if(total >= 500){//COMECA A PARTIR DO MAIOR VALOR E VAI DECRESCENDO
		x /= 500;
		Selode500 = x;
		total -= x * 500;
		x = total;
	}

	if(total >= 200){
		x /= 200;
		Selode200 = x;
		total -= x * 200;
		x = total;
	}

	if(total >= 100){
		x /= 100;
		Selode100 = x;
		total -= x * 100;
		x = total;
	}

	if(total >= 50){
		x /= 50;
		Selode50 = x;
		total -= x * 50;
		x = total;
	}

	if(total >= 25){
		x /= 25;
		Selode25 = x;
		total -= x * 25;
		x = total;
	}

	if(total >= 10){
		x /= 10;
		Selode10 = x;
		total -= x * 10;
		x = total;
	}

	if(total >= 5){
		x /= 5;
		Selode5 = x;
		total -= x * 5;
		x = total;
	}

	if(total >= 2){
		x /= 2;
		Selode2 = x;
		total -= x * 2;
		x = total;
	}

	if(total == 1){
		Selode1 = x;
	}
	//IMPRESSAO DE RESULTADOS 2
	printf("\t\t Tipos 			 Valores\n\n");
	printf("\t\tTipo 1 			  $0,01 x %d\n",Selode1);
	printf("\t\tTipo 2 			  $0,02 x %d\n",Selode2);
	printf("\t\tTipo 3 			  $0,05 x %d\n",Selode5);
	printf("\t\tTipo 4 			  $0,10 x %d\n",Selode10);
	printf("\t\tTipo 5 			  $0,25 x %d\n",Selode25);
	printf("\t\tTipo 6 			  $0,50 x %d\n",Selode50);
	printf("\t\tTipo 7 			  $1,00 x %d\n",Selode100);
	printf("\t\tTipo 8 			  $2,00 x %d\n",Selode200);
	printf("\t\tTipo 9 			  $5,00 x %d\n",Selode500);
}
//IMPRESSAO FINAL DE RESULTADOS 
void Impressao(void){

	printf("--------------------------------------------------------------------------------\n");
	printf("\t\tOpçao com pelo menos um tipo de cada selo.\n");
	printf("--------------------------------------------------------------------------------\n");
	CalcSelo1(ValorCompra);//CHAMA A FUNCAO DO CALCULO 1
	
	printf("--------------------------------------------------------------------------------\n");
	printf("\t\tOpçao com a menor quantidade de selos.\n");
	printf("--------------------------------------------------------------------------------\n");
	CalcSelo2(ValorCompra);//CHAMA  A FUNÇAO DO CALCULO 2
	printf("--------------------------------------------------------------------------------\n");
	printf("\t\tObrigado por escolher nossos selos, volte sempre!\n\n");
}