/* Crie uma função chamada compara que receba dois valores reais como parâmetro e retorne "1" se os números são iguais
ou "0", se os números forem diferentes. 

Marcus Vinícius Paula Pereira
*/

#include <stdio.h>

float compara(float a, float b)
{
  float compara;
  
  if(a == b)
  {
    printf("\n1\n");
  }
  else
  {
    printf("\n0\n");
  }
  return(compara);
}

int main(void)
{
  float n1, n2;

  printf("\n=== Comparação de Valores ===\n\n");
  
  printf("Insira o valor de a: ");
  scanf("%f", &n1);
  
  printf("\nInsira o valor de b: ");
  scanf("%f", &n2);

  compara(n1, n2);

  printf("\n=== Fim do Programa ===");

  return 0;
}