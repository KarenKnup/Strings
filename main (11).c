#include <stdio.h>
#include <string.h>

//A B C D D C B A \0 -> ir até a metade já é o suficiente p/ comparar
//0 1 2 3 4 5 6 7  8
//i             j

/*
(s[i]) = (s[i]!='\0')
i<strlen(s) && j>0
i<=j
i<j
i<=strlen(s)/2
  */

int palindromo (char s[]){//0-não é / 1-é
                          //strlen(s)-1 -> tira o \0
  int i,j;

  for(i=0,j=strlen(s)-1; i<j; i++,j--){
    if (s[i]!=s[j]){
      return 0;
    }
  }
    return 1;
}

int main(void) {
char s[30];

  printf("\nDigite uma palavra:  ");
  scanf(" %[^\n]",s); //buffer

  if (palindromo(s) == 1){
    printf("\n\n\t\tÉ um palíndromo!");
  } else{
    printf("\n\n\t\tNÃO é um palíndromo!");
  }
  
    return 0;
}