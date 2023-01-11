#include <stdio.h>
#include <string.h>

/* Desenvolver uma função que, dada uma string 
s, desloque as suas vogais para o seu início e as 
suas consoantes para o final. Os demais 
caracteres devem permanecer nas mesmas 
posições.

Nota: a ordem das vogais e das consoantes na string 
inicial não precisa ser preservada na final. */

#define TRUE 0
#define FALSE 1
  
int VerificaVogal(char c) {//Verifica se a letra 'c' é uma vogal
  char c2=c;
  
 if (c2>='A' && c2<='Z'){//Verifica se "c" é maiúscula
     c2=c2-'A'+'a';//se for, transforma em MINÚSCULA
    }

  if(c2=='a' || c2=='e' || c2=='i' || c2=='o' || c2=='u'){
    return TRUE;
  } else {
    return FALSE;
  }
}

void Reordena(char s[]){
  int tam=strlen(s)-1, i,j,n;
  char temp;

  for(i=0, j=tam; j/2 ;i++,j--){//i-vogais
    if((s[i]>='A' && s[i]<='Z') || (s[i]>='A' && s[i]<='Z')){//se for letra
      if(VerificaVogal(s[i])==FALSE){//se NÃO for uma vogal
        for(n=tam; n/2; n--){//caça uma vogal atrás pra trocar
          if(VerificaVogal(s[n])==TRUE){
            temp=s[n];
            s[n]=s[i];
            s[i]=temp;
            break;
          }
        }
      } 
    }
  }
}


int main(void) {
  char s[50]="ANE-ino"; 
  
  printf("\n\tString:       %s",s);
  Reordena(s);
  printf("\n\tNova string:  %s",s);

  
  return 0;
}