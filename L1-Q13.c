//13. Crie um algoritmo que receba o valor do produto e o dinheiro entregue pelo cliente em seguida, calcule o troco.

#include<stdio.h>
int main()
{
  float val_produto, din_cliente, troco;

  printf("\nDigite o valor do produto: R$");
  scanf("%f", &val_produto);

  printf("\nDigite o valor entregue pelo cliente: R$");
  scanf("%f", &din_cliente);

  troco = (din_cliente - val_produto);

  printf("\nDevolva R$%.2f de troco para o cliente.", troco);

  return 0;

}