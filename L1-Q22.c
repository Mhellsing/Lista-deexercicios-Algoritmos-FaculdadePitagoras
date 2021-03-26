/*Algoritmo de nome completo
Marcus Vinícius Paula Pereira
16/09/2020
*/

#include <stdio.h>

int nome()

{
  char nome [40];

  printf("Informe seu nome completo: ");
  //scanf("%s", nome);
  fgets(nome, sizeof(nome), stdin);

  printf("\nPrazer em conhecer você %s.", nome);

  return 0;

}

int main()
{
	nome();
  
  return 0;
}