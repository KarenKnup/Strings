#include <stdio.h>

//Determinar o número de caracteres de uma string;

int StrTamanho (char s[]){
  int i; //i = quantidade de caracteres

    for (i=0;s[i];i++);
  
  return i;
}

int main(void) {
char s[20];

  printf("\nDigite uma string: ");
  scanf(" %[^\n]",s);

  printf("\n\n\tA string %s tem %d caracteres.",s,StrTamanho(s));
  
  return 0;
}