#include <stdio.h>
#include <stdlib.h>
#include <stdnoreturn.h>
#include <string.h>

//3- Faça uma função que receba duas strings e retorne True se todos os caracteres da primeira string pertençam à segunda, ou False, caso contrário

//Ex: ataca’ e 'abacate' //True
// 'abato' e 'abacate' //False

int busca(char c, char str[]){
  int i=0;
  while (str[i]!='\0'){
    if (str[i] == c)
      return i; //c está na casinha i de str
    i++;
  }
  return -1; // c não existe dentro de str
}

int todosPertencem(char str1[], char str2[]){
  int i;
  i=0;
  while (str1[i]!='\0'){
    if (busca(str1[i],str2)==-1)
      return 0;
    i++;
  }
  return 1;
}

int main(void) {
char strb[]="abat";
char strc[]="abacate";
char strd[]="doiu";

 printf("\n1 - %d",todosPertencem(strb, strc));
printf("\n0 - %d",todosPertencem(strd, strc));
  
  return 0;
}