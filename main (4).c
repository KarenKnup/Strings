
#include <stdio.h>
#include <stdlib.h>
#include <stdnoreturn.h>
#include <string.h>

#define TAM 50 

void frase_vertical(char s[ ]){

int i;
for(i=0;s[i]!='\0';i++){
    printf("%c\n",s[i]);
  }
}

int main(void){

char s[TAM];

printf("\nDigite uma frase:  ");
  scanf(" %10[^\n]",s);
  
 
  printf("\n---------- Frase em vertical: --------\n");
  frase_vertical(s);
  
return 0;

}