/*Imprima a seguinte frase na vertical: “Estruturas de repetição facilitam muito a minha vida, somente assim eu conseguiria imprimir esta frase”. Marcus Vinícius Paula Pereira - 21/09/2020 */

#include <stdio.h>

int main()
{

  char frase[104] = "Estruturas de repeticao facilitam muito a minha vida somente assim eu conseguiria imprimir esta frase.";

  for( int contador = 0; contador <=104; contador++)
    printf("%c\n", frase[contador]);

  return 0;

}