//16. Crie um algoritmo que leia dois números imprima qual o maior e qual o menor deles.

#include<stdio.h>

int main()
{
  float num1, num2;

  printf("\nEscreva o primeiro número: ");
  scanf("%f", &num1);

  printf("\nEscreva o segundo número: ");
  scanf("%f", &num2);
  if(num1 == num2) 
    printf("\nOs números escolhidos são iguais.");

  else
    if(num1 > num2)
    printf("\nO primeiro número é o maior e o segundo número é o menor.\n");

    else
    printf("\nO segundo número é o maior e o primeiro número é o menor.\n");
    
 return 0;   
}