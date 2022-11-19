#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAM 10 
//tamanho da string

void troca_letras(char s[], char c, char c_new){
  int i;

  for (i=0;s[i];i++){//s[i]!='\0'
    if (s[i]==c){
      s[i]=c_new;
    }
  }
}

int main(void) {
char s[TAM], c, c_new;

  printf("\nDigite uma string: ");
  scanf(" %[^\n]",s);
  printf("Digite uma letra dessa string: ");
  scanf(" %c",&c);
  printf("Digite a nova letra para a substituir: ");
  scanf(" %c",&c_new);

  troca_letras(s,c,c_new);

  printf("\n\n\tNova string: %s",s);
  
  
  return 0;
}