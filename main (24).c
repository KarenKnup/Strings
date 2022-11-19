#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdnoreturn.h>
#include <string.h>


//4- Faça uma função que receba uma frase e retorne essa frase substituindo as letras maiúsculas por minúsculas e vice-versa.

void troca(char str[]){
  int i;
  i=0;
  char c;
  while (str[i]!='\0'){
    c=str[i];
    if (c>='A' && c<='Z')
      c= c-'A'+'a';
    else if (c>='a' && c<='z')
        c= c-'a'+'A';
    str[i]=c;
    i++;
  }
  return;
}

int main(void) {
char stre[]="Bom dia.... Isto é do teste2!";  
 
  printf("\n%s",stre);
  troca(stre);
  printf("\n%s",stre);
  
  return 0;
}