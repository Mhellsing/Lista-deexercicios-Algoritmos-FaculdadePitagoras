/* Algoritmo que informa se o número é positivo, negativo ou nulo.
Marcus Vinícius Paula Pereira
*/

#include<stdio.h>

int main()
{
  int num;

  printf("Digite um numero: ");
  scanf("%d",&num);

  if (num > 0)
    printf("\nO número escolhido é positivo.");
    
  else
    if (num < 0)
      printf("\nO número escolhido é negativo.");

    else
      printf("\nO número escolhido é nulo.");  
      
    return 0;
 
}