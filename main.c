#include <stdio.h>
/**
Fa�a um programa para calcular quantas latas de verniz ser�o necess�rias para cobrir um deque de madeira. O usu�rio do programa informar� a largura e o comprimento da superf�cie a ser coberta e o programa dever� imprimir o n�mero de latas necess�rias (valor inteiro), dado que cada lata de verniz cobre at� 3m2 de superf�cie. O programa dever� ter no m�nimo 3 fun��es. Teste o programa calculando o necess�rio para cobrir uma superf�cie de 4.5 x 5m.

Observa��o: tente identificar as tarefas que poder�o constituir diferentes fun��es e, para cada tarefa, especifique os dados de entrada (par�metros) necess�rios para sua execu��o e defina se esta tarefa produzir� ou n�o um resultado (retorno).

A resposta dever� ser o link para o Notebook
*/


double calcm2(double *larg, double *comp){
  double resultm2 = *larg * *comp;
  return resultm2;
}

double calclat(double *qlat, double *lat){
  double resultlat = (*qlat * *lat);
  return resultlat;
}


int main() {

double larg, comp, lat, qlat;

lat = 3;
qlat = 0;

printf("\nPor favor, digite a largura da superficie: ");
scanf("%lf", &larg);

printf("Agora, digite o comprimendto da superficie: ");
scanf("%lf", &comp);

printf("\n\n\nA superficie a ser envernizada: %lf m2.", calcm2(&larg, &comp));
printf("\n\nCada lata de verniz preenche %lf m2 da superficie.", lat);

while(calclat(&qlat, &lat) <= calcm2(&larg, &comp)){
  qlat = qlat + 1;
}

//printf("\n\nCalclat: %f", calclat(&qlat, &lat));
//printf("\n\nCalcm2: %f", calcm2(&larg, &comp));

printf("\n\n\nSerao necessarias %1.f latas de verniz para envernizar a superficie do deque de madeira.", qlat);

}
