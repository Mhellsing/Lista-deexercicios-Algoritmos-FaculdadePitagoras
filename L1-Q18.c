//Algoritmo para cálculo de horas

#include <stdio.h>

int main()
{
  int hh, mm, calc; 
  char separador;

  printf("Informe as horas e os minutos: ");
  scanf("%d %c %d", &hh, &separador, &mm);
  
  calc = hh * 60 + mm;

  printf("\nDesde o início do dia a 00:00 passaram-se um total de %d minutos.", calc);
  
return 0;
  
}