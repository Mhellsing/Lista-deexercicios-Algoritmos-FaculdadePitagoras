//19. Crie um algoritmo para calcular a área, o perímetro e a diagonal de um retângulo. O resultado deve aparecer de maneira organizada e clara para o usuário.

#include <stdio.h>
#include <math.h>

int main()
{
  float base, altura, area, perimetro, diagonal;

  printf("Digite o valor da base do retângulo: ");
  scanf("%f", &base);

  printf("\nDigite o valor da altura do retângulo: ");
  scanf("%f", &altura);

  area = base * altura;
  perimetro = 2 * (base + altura);
  diagonal = sqrt(pow(base, 2) + pow(altura, 2));

  printf("\nA área deste retângulo equivale a %.2f\n", area);
  printf("\nO perímetro deste retângulo equivale a %.2f\n", perimetro);
  printf("\nA diagonal deste retângulo equivale a %.2f\n", diagonal);

  return 0;

}