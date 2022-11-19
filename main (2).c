
/*
char minuscula(char c) {
  
 if (c>='A' && c<='Z'){
     c=c-'A'+'a';
    }

return c;
}
______________________________________
char maiuscula(char c) {

 if (c>='a' && c<='z'){
    c=c-'a'+'A';
    }

return c;
}
  */


#include <stdio.h>
#include <stdlib.h>
#include <stdnoreturn.h>
#include <string.h>

#define TAM 50 

char minuscula(char c) {
  
 if (c>='A' && c<='Z'){//Verifica se "c" é maiúscula
     c=c-'A'+'a';//se for, transforma em MINÚSCULA
    }

return c;
}

void frase_minuscula(char string[ ]){

int i;
for(i=0;string[i]!='\0';i++){
string[i]= minuscula(string[i]);
  }
}

int main(void){

char s[TAM];

printf("\nDigite uma palavra em letras maiúsculas:  ");
  scanf(" %10[^\n]",s);
  
frase_minuscula(s);
  
  printf("\n---------- Em minúsculo: --------\n %s",s);
  
return 0;

}