#include <stdio.h>

int qtdeChar (char s[], char c){
  int i, q=0;

  for (i=0; s[i]; i++){
    if (s[i]==c){
      q++;
    }
  }
  
  return q;
}

int contaPalavra (char frase[], char palavra[]){
  int i, j=0, count=0;
  //j - contador da palavra
  //i - contador da frase
  //count - quantas vezes a palavra aparece na frase

  for(i=0; frase[i]/*!= '\0'*/; i++){
    if (palavra[j] == frase[i]){
        j++;
        if (palavra[j]=='\0'){
            count++;
            j=0;
        }
    } else {
        j=0;
    }
  }

  return count;
}

int main(void) {
  char s[20]="Amo Amo Amo bolo", c='o', p[20]="Amo";
  int q;

  printf("\n------- QUANTAS VEZES UM CARACTERE APARECE: --------\n");
  printf("\nO char '%c' aparece %d vezes na string %s\n\n\n",c,qtdeChar(s,c),s);

  printf("\n------- QUANTAS VEZES UMA PALAVRA APARECE: --------\n");
  printf("\nA palavra '%s' aparece %d vezes em %s",p,contaPalavra(s,p),s);
  
  
  
  
  return 0;
}