/*
Dadas duas strings s1 e s2, implementar uma função que verifique se s1 é uma substring de s2 (retornando 1 caso seja ou 0, se não for).

Batata != batata
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//definição de constantes
#define TRUE 1
#define FALSE 0

/* 
char maiuscula(char c) {
 if (c>='a' && c<='z'){
    c=c-'a'+'A';
    }
return c;
}
*/
  
char minuscula(char c) {
 if (c>='A' && c<='Z'){//Verifica se "c" é maiúscula
     c=c-'A'+'a';//se for, transforma em MINÚSCULA
    }

return c;
}

int busca (char s[], char c){
  int pos;

  for(pos=0; s[pos]; pos++){
    if(s[pos]==c){
      return pos;
    }
  }
  
  return FALSE;
}

int Verifica (char s[], char s2[]){
  int i=busca(s,s2[0]), j;
  //"i" é a posição de onde começa a substring s2 em s
  
  if(i==FALSE){
    return FALSE;
  }

  for(j=0;(s[i]) || (s2[j]);j++,i++){//checando a partir po ponto "i"
    if(s2[j]!=s[i]){
      return FALSE;
    }
  }
  //"i" é a posição que começa a string s2
  return TRUE;
}

int main(void) {
  char s[20]="Batata", s2[20]="tata", s3[20]="jana";
  
    if(Verifica(s,s2)==TRUE){
      printf("\n\t%s é substring de %s",s2,s);
    } else {
      printf("\n\t%s NÃO é substring de %s",s2,s);
    }

  if(Verifica(s,s3)==TRUE){
      printf("\n\t%s é substring de %s",s3,s);
    } else {
      printf("\n\t%s NÃO é substring de %s",s3,s);
    }
  
  return 0;
  }

//--------------------------------------------------------------------------
/*
Dadas duas strings s1 e s2, implementar uma função que verifique se s1 é uma substring de s2 (retornando 1 caso seja ou 0, se não for).

Batata = batata
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//definição de constantes
#define TRUE 1
#define FALSE 0

/* 
char maiuscula(char c) {
 if (c>='a' && c<='z'){
    c=c-'a'+'A';
    }
return c;
}
*/
  
char minuscula(char c) {
if (c>='A' && c<='Z'){//Verifica se "c" é maiúscula
     c=c-'A'+'a';//se for, transforma em MINÚSCULA
    } 

return c;
}

int VerificaMai(char c, char c2){
  c=minuscula(c);
  c2=minuscula(c2);

  if(c2!=c){
    return -1;
  } 

  return TRUE;
}

int busca (char s[], char c){
  int pos;

  for(pos=0; s[pos]; pos++){
      if(s[pos] == c){
        return pos;
      } else {
        if(VerificaMai(s[pos],c)==TRUE){
          return pos;
        }
      }
  }
  
  return -1;
}

int Verifica (char s[], char s2[]){
  int i=busca(s,s2[0]), j;
  //"i" é a posição de onde começa a substring s2 em s
  
  if(i==(-1)){
    return FALSE;
  }

  if(strlen(s2) < strlen(s2)){//a substring s2 deve ser menor
    return FALSE;
  }
  
  for(j=0; (s2[j]) ;j++,i++){//checando a partir po ponto "i"
       if(s[i] != s2[j] && VerificaMai(s[i],s2[j])==FALSE){
           return FALSE;
      }        
  }
  
  return TRUE;
}

int main(void) {
  char s[20]="Batata", s2[20]="bata", s3[20]="lata";

  if(Verifica(s,s2)==TRUE){
      printf("\n\t%s é substring de %s",s2,s);
    } else {
      printf("\n\t%s NÃO é substring de %s",s2,s);
   }

  if(Verifica(s,s3)==TRUE){
      printf("\n\t%s é substring de %s",s3,s);
    } else {
      printf("\n\t%s NÃO é substring de %s",s3,s);
    }
  
  return 0;
  }
