/*
Pede-se o desenvolvimento de uma função que, dada uma string representando um número binário (ou seja, contendo
apenas os caracteres 0 e 1), converta-o para a base decimal.

    Notas:
  -- A função solicitada deverá chamar outra função que validará se a string representa um número binário. Se não consistir em um número binário, o valor -1 deverá ser retornado; caso contrário, o número inteiro decimal equivalente será retornado;

  EXEMPLO: 2(dec) = 10 (bin) -> ((2)^1*1) + ((2)^0*0)
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TRUE 0
#define FALSE -1
#define c 50

int Verifica(char n[]){//se é binário
  int i;
  for(i=0; n[i]; i++){
    if (n[i]!='0' && n[i]!='1'){
      return FALSE;
    }
  }
  return TRUE;
}

int pow_interativo (int base, int potencia){//cálculo de potência
  int resultado=1, i;

  if (potencia==0){
    return 1;
  } else {
    for(i=0; i<potencia ; i++){//potencia=quantas vezes a base se multiplica
      resultado=resultado*base;
    }
    return resultado;
  }
}

int decimal (char n[]){
  int decimal=0, i, tamString=strlen(n)-1;//adequando tam pro PC

  if(Verifica(n)==TRUE){
    for (i=0; n[i]; i++){
      if (n[i]=='1'){
        decimal=decimal+pow_interativo(2,tamString);
      }
      tamString--;
    }
    return decimal;
  } else {
    return FALSE;
  }
}

int main (void){
  char n[c];

  printf("\nDigite um número em binário: ");
  scanf(" %[^\n]",n);

  printf("\n----- DECIMAL ------\n");
  printf("%d",decimal(n));
  
  
	return 0;
}
  