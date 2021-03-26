//20. Crie um algoritmo para calcular o aumento de salário do funcionário de uma empresa. O usuário deve informar o salário e este será acrescido em 10 %. Ao final, o algoritmo deve exibir o valor do salário antigo e o valor do novo salário.

#include <stdio.h>

int main()
{
  float antigo_sal, novo_sal;

  printf("Digite o valor do seu antigo salário: R$");
  scanf("%f", &antigo_sal);

  novo_sal = antigo_sal * 10/100 + antigo_sal;

  printf("\nO seu salário antigo no valor de R$%.2f, terá um aumento de 10 por cento, portanto, o seu salário com o valor corrigido é de R$%.2f.", antigo_sal, novo_sal);
  
  return 0;

}