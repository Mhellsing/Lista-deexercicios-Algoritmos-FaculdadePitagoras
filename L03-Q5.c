/*Escreva um procedimento que imprima os quadrados dos números inteiros 
compreendidos entre dois valores que são passados como argumentos ao procedimento.

Marcus Vinícius Paula Pereira*/

#include <stdio.h>
#include <math.h>

void quadrado (int a, int b)
{
  int i, pot;

  printf("\nOs valores compreendidos entre A e B são: ");
  for(i = a + 1; i < b; i++)
  
  {
    pot = pow(i, 2);
    
    printf("%i ", pot);
  }
  
}

int main(void) 
{
  int a, b;
  
  printf("\nInforme o valor de A: ");
  scanf("%i", &a);

  printf("\nInforme o valor de B: ");
  scanf("%i", &b);

  quadrado(a, b);
  
  return 0;
}