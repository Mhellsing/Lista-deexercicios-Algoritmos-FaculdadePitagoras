/*Algoritmo de custo benefício alcool x gasolina
Marcus Vinícius Paula Pereira
16/09/2020
*/

#include <stdio.h>

int custo()

{
  float val_gasolina, val_alcool, calc;

  printf("Valor da gasolina: R$");
  scanf("%f", &val_gasolina);

  printf("\nValor do ácool: R$");
  scanf("%f", &val_alcool);

  calc = val_gasolina * 0.7;//cálculo do custo benefício
  printf("\nResultado R$%.2f\n\n", calc);

  if(calc > val_alcool)
  {
    printf("Neste momento o custo benefício em abastecer com álcool é melhor.");
  }
  else
  {
    printf("Neste momento o custo benefício em abastecer com gasolina é melhor. ");
  }

  return 0;

}

int main()
{
	custo();
  
  return 0;
}