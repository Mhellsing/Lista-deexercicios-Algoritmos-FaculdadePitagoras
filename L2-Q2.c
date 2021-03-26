/* Q2 - Crie um algoritmo que imprima a tabuada de multiplicação de um número dado pelo usuário.
Marcus Vinícius Paula Pereira
21/09/2020
*/

#include <stdio.h>

int main()
{
  int num1, num2;
  
  printf("Escolha um número para visualizar sua tabuada: ");
  scanf("%i", &num1);
  
  printf("\nMultiplicação\n");

  for(num2 = 1; num2 <=10; num2++)
    printf("\n%.2d * %d = %d \n", num2, num1, (num1*num2));

  return 0;
}