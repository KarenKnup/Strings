#include <stdio.h>
#include <stdlib.h>
#include <stdnoreturn.h>
#include <string.h>

#define TAM 50 

char maiuscula(char c) {

 if (c>='a' && c<='z'){
    c=c-'a'+'A';
    }

return c;
}

void frase_maiuscula(char string[ ]){

int i;
for(i=0;string[i]!='\0';i++){
string[i]= maiuscula(string[i]);
  }
}

int main(void){

char s[TAM];

printf("\nDigite uma palavra em letras minúsculas:  ");
  scanf(" %10[^\n]",s);
  
frase_maiuscula(s);
  
  printf("\n---------- Em maiúsculo: --------\n %s",s);
  
return 0;

}