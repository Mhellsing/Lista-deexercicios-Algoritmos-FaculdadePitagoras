#include <stdio.h>
#include <stdlib.h>

float randf( float min, float max )
{
    return min + (rand() / ( RAND_MAX / ( max - min) ) ) ;
}

int main(void) 
{
  printf("\n");

  float matriz[7][5], random, mediaDia[7], mediaHora[5], mHora, mDia, mSemana;
  int p, pHora;
  p = 0;
  mHora = 0;
  mDia = 0;
  mSemana = 0;
  pHora = 10;
  
  /*Preenchendo a matriz*/
  for(int l = 0; l < 7; l++)
  {
    for(int c = 0; c < 5; c++)
    {
      random = randf(25, 30);
      matriz[l][c] = random;
      mSemana = mSemana + matriz[l][c];

    }


  }
  
  /*Calculando Média dentro do mesmo horário*/
  for(int l = 0; l < 7; l++)
  {
    for(int c = 0; c < 5; c++)
    {
      mHora = mHora + matriz[c][l];

    }
    mHora = mHora / 7;
    mediaHora[p] = mHora;
    p++;
  }    
  /*Zerando p*/
  p=0;
  /*Calculando Média Diária*/
  for(int l = 0; l < 7; l++)
  {
    for(int c = 0; c < 5; c++)
    {
      mDia = mDia + matriz[l][c];

    }
    mDia = mDia / 5;
    mediaDia[p] = mDia;
    p++;
  }      

  /*Zerando p*/
  p=0;

  /*Print Matriz*/
  printf(" Hora ->\n\n");
 
  for(int l = 0; l < 7; l++)
  {
    for(int c = 0; c < 5; c++)
    {
      printf("| %.1f", matriz[l][c]);

    }
    printf("\n\n");
  }
  mSemana = mSemana/35;
  /*Print Media mesmo Horario*/
  for(p = 0; p < 7; p++)
  {
    printf("Media dentro do Horario %2.d:", pHora);
    printf("00");
    printf(" %.1f", mediaHora[p]);
    printf("\n");
    pHora = pHora +2;
  }
  
  printf("\n");
  /*Print Diária*/
  for(p = 0; p < 7; p++)
  { 
    printf("Media do dia %d :", (p+1));
    printf(" %.1f", mediaDia[p]);
    printf("\n");
  }
  
  printf("\n");
  /*Print Semanal*/
  printf("Media Semanal: %.1f", mSemana);
  
  return 0;
}