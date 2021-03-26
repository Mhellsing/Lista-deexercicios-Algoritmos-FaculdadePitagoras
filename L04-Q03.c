/*Ponteiro + alocação dinâmica de memória: Crie um ponteiro do tipo float, em seguida, 
aloque memória dinamicamente utilizando a função malloc, permita que o usuário informe 
este valor e em seguida o exiba natela. 

Obs.: Lembre-se de liberar a memória antes de encerrar o programa !

Marcus Vinícius Paula Pereira - 26/11/2020
*/

#include <stdio.h>
#include <stdlib.h>

int main(void) 
{
  float *ponteiro = NULL;
  ponteiro = malloc(sizeof(float));

  printf("\n");
  printf("==== Teste de Alocação de Memória =====");
  
  if(ponteiro == NULL)
  {
    printf("Memória insuficiente");
    return 0;
  }
  else
  {
   printf("\n\nPor favor informe o seu peso: ");
   scanf("%f", ponteiro);
   printf("\nO peso informado foi de: %.3fkg", *ponteiro);
  }

  free(ponteiro);

  return 0;
}