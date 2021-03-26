/*Q02 - Crie um programa que possui um ponteiro e o aponte para uma variável qualquer, depois,
altere o valor da variável por intermédio do ponteiro.

Marcus Vinícius Paula Pereira
*/

#include <stdio.h>

int main(void) {
  
  int a;
  int *ptr = NULL;

  a = 5;
  
  printf("\n");
  printf("******* PONTEIROS *******\n");

  ptr = &a;
  printf("\nO ponteiro está apontando para a variável A que vale: %i. ",*ptr);
  
  //alterando o valor da variável por meio do ponteiro.
  *ptr = 20;
  
  printf("\n\nNeste momento o ponteiro altera o valor da variável A, que passa a valer: %i\n", a);
  
  printf("\n=== Fim do Programa ===");

  return 0;
}