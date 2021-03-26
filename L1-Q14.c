/*14. Faça um algoritmo que receba o saldo de uma conta poupança e, aumente seu valor em 20%,
caso o saldo seja menor do que ou igual a R$ 1000,00 ou, em 10%, caso o saldo seja superior a este valor. 
Depois, informe ao usuário seu novo saldo.*/

#include<stdio.h>

int main()
{
  double saldo1, novosaldo1, novosaldo2;

  printf("\nInforme o saldo de sua conta: R$");
  scanf("%lf", &saldo1);

  novosaldo1 = saldo1 * 20 / 100 + saldo1;
  novosaldo2 = saldo1 * 10 / 100 + saldo1;

  if (saldo1 <= 1000)
    printf("Seu novo saldo é de R$%.2f", novosaldo1);
  
  else
    printf("Seu novo saldo é de R$%.2f", novosaldo2);
  
 return 0;
  
}