//17. Faça um algoritmo para calcular o Delta, utilizando a equação: ∆ = b2 − 4 ∗ a ∗ c

#include <stdio.h>
#include<math.h>

int main()
{
  float A, B, C, delta;

  printf("Defina o valor de A: ");
  scanf("%f", &A);

  printf("Defina o valor de B: ");
  scanf("%f", &B);

  printf("Defina o valor de C: ");
  scanf("%f", &C);

  delta = pow(B, 2) - 4 * A * C;

  printf("O valor do delta é igual a %.2f", delta);

  return 0;

}