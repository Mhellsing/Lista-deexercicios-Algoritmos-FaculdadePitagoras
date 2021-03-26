/*Escreva um procedimento ou função em liguagem C que receba como
parâmetros dois valores A e B e calcule o valor de A elevado a B.
Seu procedimento ou função deve se chamar pot. Não utilize a função pow.
Marcus Vinícius Paula Pereira */

#include <stdio.h>

void pot()
{
  int base_a, expoente_b, contador, calc = 1;
  
  printf("\n=== Exponenciação ===\n\n");
  
  printf("Informe o valor da base: ");
  scanf("%i", &base_a);

  printf("\nInforme o valor do expoente: ");
  scanf("%i",&expoente_b);

  for(contador = 0; contador < expoente_b; contador++) 
  {
    calc = calc * base_a;
  }
  if(expoente_b == 0)
  {
    calc = 1;
    printf("\n%i elevado a %i = %i\n", base_a, expoente_b, calc);
  }
  else
  {
    printf("\n%i elevado a %iª potência = %i\n", base_a, expoente_b, calc);
  }
}

int main(void) 
{
  int decisao;
  
  do
  {
    pot();

    printf("\n\nDeseja encerrar o programa? 1-Sim ou 2-Não\n");
    scanf("%i", &decisao);

  }while(decisao != 1);
  
  printf("\n=== Programa Encerrado ===");
  return 0;
}