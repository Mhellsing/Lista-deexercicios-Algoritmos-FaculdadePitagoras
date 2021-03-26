/*Imprima a seguinte figura:

∗
∗ ∗
∗ ∗ ∗
∗ ∗ ∗ ∗
∗ ∗ ∗ ∗ ∗ 

Marcus Vinicius Paula Pereira - 26/09/2020 */


#include <stdio.h>

int main() 
{
  int num;
  num = 5;

  for(int x = 1; x <= num; x++)
  {
    for(int y = 1; y <= x; y++)
    {
      printf("* ");
    }
    printf("\n");
  }

  return 0;
}