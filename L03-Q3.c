/*Fazer uma função que leia cinco valores inteiros e positivos e calcule a média harmônica.
Marcus Vinícius Paula Pereira
*/

#include <stdio.h>

float mediaHarmonica(float a, float b, float c, float d, float e)
{
  float mediaHarmonica;
  
  mediaHarmonica = 5 / ((1/a) + (1/b) + (1/c) + (1/d) + (1/e));

  return (mediaHarmonica);
}

int main(void)
{
  float n1, n2, n3, n4, n5, media;
  int decisao;

  printf("\n=== Cálculo de Média Harmônica ===\n");

 do
 {
   printf("\nValor de n1: ");
   scanf("%f", &n1);

    printf("Valor de n2: ");
    scanf("%f", &n2);

    printf("Valor de n3: ");
    scanf("%f", &n3);

    printf("Valor de n4: ");
    scanf("%f", &n4);

    printf("Valor de n5: ");
    scanf("%f", &n5);

    media = mediaHarmonica(n1, n2, n3, n4, n5);

    if(n1 <= 0 || n2 < 0 || n3 < 0 || n4 < 0 || n5 < 0)
    {
      printf("\nValor(es) inválido(s)\n\nDeseja continuar a executar o programa? \n\n1-sim ou 2-não\n");
      scanf("%i", &decisao);
    }
    else
    {
      printf("\nMédia Harmônica = %.2f\n", media);
      printf("\nDeseja continuar a executar o programa? \n1-sim ou 2-não\n");
      scanf("%i", &decisao);
    }
 }while(decisao !=2);

 printf("\n=== Programa Encerrado ===\n");


  return 0;
}