/* ***************************************
* PROJETO 1 - SISTEMA DE ESTACIONAMENTO  *
* Aluno: Gabriel Morais Marreiros        *
* Matricula: 16/0121256                  *
******************************************/
#include <stdio.h>
int main()
{
int h_ent, min_ent, h_sai, min_sai, h_total,minutos, min_total;
float tarifa;
/*PEDE TODAS AS ENTRADAS AO USUARIO */
    while(1)/* PEDE E TESTA SE A ENTRADA E VALIDA */
      {
        printf("Informe a HORA DE ENTRADA no estacionamento: ");
        scanf("%d",&h_ent);
        if(h_ent > 5 && h_ent < 24)
            break;/* CASO A ENTRADA SEJA VALIDA O LAÇO EH TERMINADO */
        else
            printf(" ------ Funcionamento de 6:00 as 23:59, Informe uma HORA entre 6-23 --------\n");/* SE A ENTRADA E INVALIDA RECOMEÇA O LOOP */
      }

    while(1)
      {/*PEDE TODAS AS ENTRADAS AO USUARIO */
        printf("Informe o MINUTO DE ENTRADA no estacionamento: ");
        scanf("%d",&min_ent);
        if(min_ent >= 0 && min_ent < 60)
            break;/* CASO A ENTRADA SEJA VALIDA O LAÇO EH TERMINADO */
        else
            printf("\t\t------------Informe um MINUTO entre 0-59------------\n");/* SE A ENTRADA E INVALIDA RECOMEÇA O LOOP */
      }

    while(1)
      {/*PEDE TODAS AS ENTRADAS AO USUARIO */
        printf("\t**** ATENÇAO, APOS A 00:15 SERA COBRADO UMA TAXA DE RS20 ****\n");
        printf("Informe a HORA DE SAIDA no estacionamento: ");
        scanf("%d",&h_sai);
        if(h_sai >= 0 && h_sai < 24)
            break;/* CASO A ENTRADA SEJA VALIDA O LAÇO EH TERMINADO */
        else
            printf("\t\t------------Informe uma HORA entre 0-23------------\n");/* SE A ENTRADA E INVALIDA RECOMEÇA O LOOP */
      }

    while(1)
      {/*PEDE TODAS AS ENTRADAS AO USUARIO */
        printf("Informe o MINUTO DE SAIDA no estacionamento: ");
        scanf("%d",&min_sai);
        if(min_sai >= 0 && min_sai < 60)
            break;/* CASO A ENTRADA SEJA VALIDA O LAÇO EH TERMINADO */
        else
            printf("\t\t------------Informe um MINUTO entre 0-59------------\n");/* SE A ENTRADA E INVALIDA RECOMEÇA O LOOP */
      }
    /*CONVERTE TODAS AS ENTRADAS PARA MINUTOS*/
    minutos = (h_sai * 60 + min_sai)-(h_ent * 60 + min_ent);
    if(minutos < 0)/* VERIFICA SE PASSOU DA MEIA NOITE */
        minutos += 1440;/* ADICIONA MAIS 24H PARA AJUSTAR O CALCULO  */
    printf("\n********************************************************************************\n");

        h_total = minutos / 60;/* DIVIDE A QUANTIDADE TOTAL DE MINUTOS POR INTEIRO PARA SABER O TEMPO TOTAL DE HORAS*/
        min_total = minutos % 60;/* RESTO DA DIVISAO PARA SABER O TEMPO TOTAL DE MINUTOS */

        if(minutos > 480)/* CASO O TOTAL DE HORAS SEJA MAIOR QUE 8 HORAS*/
            tarifa = 17.50 + (minutos - 480) * 0.008333333333333333;

        else if(minutos > 300 && minutos <= 480)/* CASO O TOTAL DE HORAS ESTEJA ENTRE 5 E 8 HORAS */
            tarifa = 13 + (minutos - 300) * 0.025;

        else if(minutos > 120 && minutos <= 300)/* CASO O TOTAL DE HORAS ESTEJA ENTRE 2 E 5 HORAS */
            tarifa = 7 + (minutos - 120) * 0.0333;

        else/* CASO O TOTAL DE HORAS SEJA ATE 2 HORAS */
            tarifa = 0.05833 * minutos;

        minutos = (h_sai * 60 + min_sai)-(h_ent * 60 + min_ent);/* CALCULA OS MINUTOS DE NOVO */
        if(minutos < 0 && h_sai >= 0 && min_sai > 15 || minutos < 0 && h_sai > 0)/* CASO TENHA PASSADO DA 00:15 COBRA TAXA DE R$20 */
            tarifa += 20.0;/* ADICIONA R$20 A TAXA */
        /* GERA O BOLETO DO ESTACIONAMENTO */
        if(h_total == 0 && min_total == 0)/* PARA SABER SE FICOU EXATAMENTE 24H */
          {
            h_total = 24;
            min_total = 0;
            tarifa = 45.50;
          }

    printf("\n\t\t         TARIFA    DE    ESTACIONAMENTO\n");
    printf("\t\t    ----------------------------------------\n");
    printf("\t\t    Horario de entrada:            %2.2dh %2.2dmin\n",h_ent,min_ent);
    printf("\t\t    Horario de saida:              %2.2dh %2.2dmin\n",h_sai,min_sai);
    printf("\t\t    ----------------------------------------\n");
    printf("\t\t    Tempo total de permanencia:    %2.2dh %2.2dmin\n\n",h_total,min_total);
    printf("\t\t    Tarifa Total                    R$ %.2f\n",tarifa);
return 0;
}
