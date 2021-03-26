//15. Crie um algoritmo que auxilie no cálculo de uma regra de três. 

#include<stdio.h>

int main()
{
  float val_A, val_B, val_C, x;

  printf("Realize o cálculo neste programa da seguinte maneira: A * B / C = x\n");

  printf("\nInforme o valor de A: ");
  scanf("%f", &val_A);

  printf("\nInforme o valor de B: ");
  scanf("%f", &val_B);

  printf("\nInforme o valor de C: ");
  scanf("%f", &val_C);

  x = val_A * val_B / val_C;

  printf("\nO resultado da regra de três é igual a: %.2f", x);
  
  return 0;
}
