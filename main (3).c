#include <stdio.h>
#include <stdlib.h>
#include <stdnoreturn.h>
#include <string.h>

#define TAM 500 

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

//toupper - transforma em maiúsculo
//tolower - transforma em minusculo

void frase_invertida(char s[ ]){

int i,s1[TAM], s2[TAM];
  
for(i=0;s[i]!='\0';i++){
s1[i]=toupper(s[i]);
s2[i]=tolower(s[i]);

  if (s[i]>='A' && s[i]<='Z'){//Minu
    s[i]=s2[i];
    }
  else {//Maiu
    s[i]=s1[i];
    }
  }
}

int main(void){

char s[TAM];
  int x;

 printf("\nDigite uma frase:  ");
  scanf("  %10[^\n]",s);
  
  
frase_invertida(s);
  
  printf("\n---------- Invertido: --------\n %s",s);
  
return 0;

}