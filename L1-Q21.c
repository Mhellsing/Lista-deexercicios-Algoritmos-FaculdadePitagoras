/*Algoritmo de custo benef�cio alcool x gasolina
Marcus Vin�cius Paula Pereira
16/09/2020
*/

#include <stdio.h>

int custo()

{
  float val_gasolina, val_alcool, calc;

  printf("Valor da gasolina: R$");
  scanf("%f", &val_gasolina);

  printf("\nValor do �cool: R$");
  scanf("%f", &val_alcool);

  calc = val_gasolina * 0.7;//c�lculo do custo benef�cio
  printf("\nResultado R$%.2f\n\n", calc);

  if(calc > val_alcool)
  {
    printf("Neste momento o custo benef�cio em abastecer com �lcool � melhor.");
  }
  else
  {
    printf("Neste momento o custo benef�cio em abastecer com gasolina � melhor. ");
  }

  return 0;

}

int main()
{
	custo();
  
  return 0;
}