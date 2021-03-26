//Algoritmo que calcula a hipotenusa.

//printf = Printar na tela.
//scanf = Faz a leitura de um dado digitado.
//& = Tem a função de retornar o conteúdo da variável.
//%f = Realiza a escrita de números reais.(ponto flutuante)

#include<stdio.h>
#include<math.h>

int main()
{
  float cat1, cat2, hipotenusa;
  
  printf("Digite o valor do cateto 1: "); 
  scanf("%f",&cat1); 
    
  printf("Digite o valor do cateto 2: ");
  scanf("%f", &cat2);

  hipotenusa = sqrt(pow(cat1, 2) + pow(cat2, 2)); //Raiz quadrada da soma dos quadrados dos catetos é igual a hipotenusa. 
  
  printf("O resultado da hipotenusa é igual a: %.2f", hipotenusa);
  
  return 0;
  
  }
