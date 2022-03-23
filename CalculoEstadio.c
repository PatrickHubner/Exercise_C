#include <stdio.h>

int main(void) {

  int Publico;

  printf("Qual o público presente no jogo?");
  scanf("%d", &Publico);

  float popular, geral, arquibancada, cadeiras;

  popular = 1.00;
  geral = 5.00;
  arquibancada = 10.00;
  cadeiras = 20.00;

  int Calculo1, calculo2, calculo3, Calculo4;

  Calculo1 = Publico * 0.1;
  calculo2 = Publico * 0.5;
  calculo3 = Publico * 0.3;
  Calculo4 = Publico * 0.1;
  
  printf("O NUMERO DE PESSOAS PRESENTES É: %d popular, %d geral, %d arquibancada, %d cadeiras\n", Calculo1, calculo2, calculo3, Calculo4);
 
  float Dinheiropop, Dinheiroger, Dinheiroarq, Dinheirocad, total;
  Dinheiropop = Calculo1 * popular;
  Dinheiroger = calculo2 * geral;
  Dinheiroarq = calculo3 * arquibancada;
  Dinheirocad = Calculo4 * cadeiras;
  
total = Dinheiropop + Dinheiroger + Dinheiroarq + Dinheirocad;
  
  printf("Totalizando um valor de: %0.2f reais\n", total);

  
  return 0;
}
