#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
char torna_letra_maiuscula(char c) {

 if (c>='a' && c<='z'){
    c=c-'a'+'A';
    }

return c;

}
*/

void frase_maiuscula(char string[ ]) {

int i;

for(i=0;string[i]!='\0';i++) {

//string[i]= torna_letra_maiuscula(string[i]);
string[i]=toupper(string[i]);
  
  }
}

/* int comprimento(char *string) {
int i;

for(i=0;string[i]!='\0';i++);

return i;
}
*/

int inicUltimaPalavra(char *string) {

//int posF=comprimento(string);
  int posI=strlen(string);
  //int posI=posF;

while (posI>=0 && string[posI]!=' ')
  
posI--;

return posI+1;//+1 por causa do \0
}

int main(void) {
char cidade[30]="Rio de Janeiro";

  //printf("%d",strlen(cidade)); -- strlen tira o \0
  //printf("%d",inicUltimaPalavra(cidade));
  
frase_maiuscula(cidade+inicUltimaPalavra(cidade));// cidade(0) + inicio ultima palavra(x)=começa a botar maiuscula a partir da posição x=7

printf ("\n\n\tA cidade eh %s\n", cidade);
  
  
  return 0;
}