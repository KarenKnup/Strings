#include <stdio.h>
#include <string.h>

#define TAM 20

int contaChar(char s[]){
  int i;
  
  for (i=0; s[i]; i++);//não para até achar o \0
  
  return i;
}

int contaChar2(char s[]){
  int i, q=0;
  
  for (i=0; s[i]; i++){
     if (s[i]!=' '){
       q++;
     }
    }
  
  return q;
}

int contaPalavra (char s[]){
  int i, q=1;
  for (i=0; s[i]; i++){
     if (s[i]==' '){
       q++;
     } 
  }
  
  return q;
}

int main(void) {
  int q;
  char s[TAM]="Eu amo bolo";

  q=strlen(s);
  
  printf("\n%s = %d caracteres/letras",s,q); //conta os espaços, mas NÃO conta o \0
  printf("\n%s = %d caracteres/letras",s,contaChar(s));
  
  printf("\n-------------------------------------------\n");
  
  printf("\n%s = %d caracteres/letras",s,contaChar2(s)); //não conta os espaços nem o \0

   printf("\n-------------------------------------------\n");
  printf("\n%s = %d palavras",s,contaPalavra(s));
  return 0;
}