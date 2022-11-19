#include <stdio.h>
#include <stdlib.h>
#include <stdnoreturn.h>
#include <string.h>

// 1- certo/verdadeiro e 0- errado/falso

//Faça uma função que receba um CEP e retorne True se está corretamente formado ou False, caso contrário. Um CEP está //corretamente formado, se todos os seus caracteres
//são dígitos e no seguinte formato: 
//XX.XXX-XXX

int cepCorreto(char cep[]){
  int i;
  if (cep[2] !='.' || cep[6] !='-' || strlen(cep)>10)
      return 0;
  i=0;
  while (cep[i]!='\0'){
    if (i!=2 && i!=6){
      if (cep[i] <'0' || cep[i] >'9') // não é algarismo
        return 0;
    }
    i++;
  }
  return 1;
  
}

int main(void) {
char cep1[]="22.222-222";
char cep2[]="222.222-222";

  printf("\n1 - %d",cepCorreto(cep1));
  printf("\n0 - %d",cepCorreto(cep2));
  
  return 0;
}