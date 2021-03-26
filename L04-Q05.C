/*Crie um programa que preencha automaticamente uma matriz de inteiros com números
aleatórios, a matriz deve ter o tamanho 10000 por 10000. 
• Depois de criada a matriz, você vai mensurar:
- O tempo necessário para preencher a matriz e lê-la sequencialmente usando o modo tradicional.
- O tempo necessário para preencher a matriz e lê-la sequencialmente usando um ponteiro.
- Qual teve melhor desempenho, porque você acha que isso aconteceu? 

Marcus Vinícius Paula Pereira - 28/11/2020
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) 
{
  int **ptr = NULL;
  int *ptraux = NULL;
  double timeStart, timeEnd, timeExecution;
  const int max = 1000;
    
  //alocação de memória das linhas
  ptr = calloc(max, sizeof(int*));

  //alocação de memória das colunas
  for(int i = 0; i < max; i++ )
  {
    ptr[i] = calloc(max, sizeof(int));

  }

  timeStart = time(NULL);
  //preenchimento da matriz
  for(int l = 0; l < max; l++)
  {
    ptraux=ptr[l];
    for(int c = 0; c < max; c++)
    {
      *ptraux = rand() %5 + 25;
      //ptr[l][c] = rand() %5 + 25;
      ptraux++;
    }
  }

  for(int i = 0; i < max; i++)
  {
    ptraux = ptr[i];
    for(int j = 0; j < max; j++)
    {
      printf("%2.d | ", *ptraux);
      ptraux++;
    }
    printf("\n");
  }
  timeEnd = time(NULL);
  timeExecution = difftime(timeEnd, timeStart);

  printf("\n\n ===== TEMPO DE EXECUÇÃO =====");
  printf("\n\n %lf", timeExecution);
  return 0;
}