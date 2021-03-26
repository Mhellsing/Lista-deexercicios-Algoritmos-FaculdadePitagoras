//Algoritmo para informar o quadrado do número digitado pelo usuário.

#include<stdio.h>
#include<math.h>

int main()
{
  float num, potencia;

  printf("Digite um número qualquer: ");
  scanf("%f", &num);

  potencia = pow(num, 2);

  printf("\nO quadrado do número digitado é igual a:%2.f", potencia);

return 0;

}