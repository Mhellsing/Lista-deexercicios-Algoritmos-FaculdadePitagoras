/*Ponteiro + alocação dinâmica de memória: Crie um ponteiro do tipo float, em seguida,
aloque memória dinamicamente utilizando a função calloc,permita que o usuário informe
este valor e em seguida o exiba natela.

Obs.: Lembre-se de liberar a memória antes de encerrar o programa!

Marcus Vinícius Paula Pereira - 26/11/2020
*/

#include <stdio.h>
#include <stdlib.h>

int main(void) 
{
  float *ponteiro = NULL;
  ponteiro = calloc(3, sizeof(float));

  if(ponteiro == NULL)
  {
    printf("\nMemória insuficiente.\n\n");
    return 0;
  }
  else
  {
   printf("\n");
   printf("==== Teste de Alocação de Memória com função ''calloc'' =====");
   
   for(int i = 1; i < 4; i++)
   {
     printf("\n\nPor favor informe o %dº peso: ", i);
     scanf("%f", ponteiro);
   }
      for(int i = 1; i < 4; i++)
      {
       printf("\nO %dº peso informado foi de: %.3fkg", i, *ponteiro);
      }
  }

  free(ponteiro);

  return 0;
}