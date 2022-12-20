#include <stdio.h>
#include <string.h>

//Verifica se uma string é outra embaralhada 

#define TRUE 0
#define FALSE 1

int busca (char c, char s[]){
  for(int i=0; s[i]; i++){
    if(s[i]==c){
      return TRUE;
    }
  }

  return FALSE;
}

int Verifica (int tam, char s[], char s2[tam]){
  
  if(strlen(s)!=tam){
    return FALSE;
  }

  for(int i=0; s[i] && tam>=0; i++, tam--){
    if(busca(s2[tam-1],s)==FALSE){
      return FALSE;
    }
  }

  return TRUE;
}

int main(void) {
  char s1[20]="anta", s2[20]="alta", s3[20]="naat";
  //0 - TRUE
  //1 - FALSE

  printf("\n%s e %s = %d",s1,s2,Verifica(strlen(s2),s1,s2));
  printf("\n%s e %s = %d",s1,s3,Verifica(strlen(s3),s1,s3));

  
  return 0;
}