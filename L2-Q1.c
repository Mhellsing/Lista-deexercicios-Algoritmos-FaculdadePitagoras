/* Q1 - Criar um algoritmo que imprima os 100 primeiros números pares
Marcus Vinícius Paula Pereira
21/09/2020 */

#include <stdio.h>

int main()
{
  int i;

  for(i = 2; i < 202; i+=2)
  {
    printf("\n%i", i);
  }

  return 0;
}