#include <stdio.h>
#include <string.h>

//Determinar o número de ocorrências de um caracter em determinada string;

int QuantasVezes (char s[], char c){
  int i, cont;

  for (i=0;s[i];i++){
    if (s[i]==c){
      cont++;
    }
  }

  return cont;
}

int main(void) {
char s[20], c;

  printf("\nDigite uma string: ");
  scanf(" %[^\n]",s);
  printf("Digite um caracter: ");
  scanf(" %c",&c);
  
 printf("\n\n\tA letra '%c' aparece %d vezes",c,QuantasVezes(s,c));
  
  return 0;
}