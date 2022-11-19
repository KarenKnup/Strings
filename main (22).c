#include <stdio.h>
#include <stdlib.h>
#include <stdnoreturn.h>
#include <string.h>

//2- Faça uma função que receba duas strings e retorne True se a //primeira string é prefixo a segunda ou False, caso contrário

//Ex: 'aba’ e 'abacate' //True 
//    'abat’ e 'abacate' //False

int ehPrefixo(char str1[], char str2[]){
  int i=0;
  if (strlen(str1) > strlen(str2))
    return 0;
  while (str1[i]!='\0'){
    if (str1[i] != str2[i])
      return 0;
    i++;
  }
  return 1;
}

int main(void) {
  char stra[]="aba";
  char strb[]="abat";
  char strc[]="abacate";

  printf("\n1 - %d",ehPrefixo(stra, strc));
  printf("\n0 - %d",ehPrefixo(strb, strc));
  
  return 0;
}