//Escreva um algoritmo que converta graus Célsius (C) em Fahrenheit (F), utilizando a formula: F = (9 ∗ C + 160) / 5

#include<stdio.h>

int main()
{
  float graus, fahrenheit;

  printf("Digite o valor da temperatura em °C: ");
  scanf("%f", &graus);

  fahrenheit = (9 * graus + 160) / 5;

  printf("\nO valor de °C %.2f em °F é igual a: %.2f", graus, fahrenheit);

  return 0;

}
