//12. Elabore um algoritmo que receba três números realize sua soma e informe se o resultado é maior ou menor do que 25.

#include<stdio.h>

int main()
{
  float n1, n2, n3, soma;

  printf("Digite o primeiro número: ");
  scanf("%f", &n1);
  
  printf("\nDigite o segundo número: ");
  scanf("%f", &n2);
  
  printf("\nDigite o terceiro número: ");
  scanf("%f", &n3);
  
  soma = (n1 + n2 + n3);

  printf("\nO resultado da soma é igual a: %.2f\n", soma);

  if (soma < 25)
    printf("\nO resultado da soma dos valores informados é menor que 25.");
  
  else
    printf("\nO resultado da soma dos valores informados é maior que 25.");

return 0;

}