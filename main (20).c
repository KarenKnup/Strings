#include <stdio.h>
#include <string.h>

/*
if (x!=0) -->  if (x)
!  -->não é/diferente de
if (!x)
while(strcmp(s,"")==0) --> !strcmp(s,"")
*/

int numOcorrencias (char s[], char ch){
  int i,cont=0;
  for(i=0;s[i]!='\0';i++){
    if (ch==s[i]){
      cont++;
        }
  }
  return cont;
}

int quantasVezes (char s[], char c){
  int i, cont=0;

  for(i=0;i<strlen(s);i++){
    if (s[i]==c){
      cont++;
    }
  }

  return cont;
}

int main(void) {
char palavra[20], letra;
  int quant, quant2;

  printf("\nDigite uma palavra: ");
   fflush(stdin);
  gets(palavra);
  printf("Escolha uma letra da palavra: ");
  fflush(stdin);
  scanf("%c",&letra);

  printf("\n\n--------- sem STRLEN -----------\n");
  quant=numOcorrencias(palavra,letra);
  printf("A letra %c apareceu %d vezes na palavra %s",letra,quant,palavra);

  printf("\n\n--------- com STRLEN -----------\n");
  quant2=quantasVezes(palavra,letra);
   printf("A letra %c apareceu %d vezes na palavra %s",letra,quant2,palavra);
  
  return 0;
}