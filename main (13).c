#include <stdio.h>
#include <string.h>

/*
s -> A L G O R I T M O S \0
     0 1 2 3 4 5 6 7 8 9  10
           i
              |
              V
     A L G R I T M S \0
     0 1 2 3 4 5 6 7  8
  */

void removerCaracter (char s[], char c){
  int i, j;

  for (i=0; s[i]; i++) {//i++ = i=0 -> while (s[i])
    if (s[i]==c) {
      for (j=i; s[j]; j++){//j é a posição do char "c"
        s[j]=s[j+1]; // a posição j=i vai virar a posição seguinda -- bola -- quero tirar "o", então "o" vira o "l"
      }
    } else {
      i++;
    }
  }
}

int main(void) {
char s[20], c;
 
  printf("\nQual letra você deseja retirar da string: ");
  c=getchar();
   printf("\nDigite uma string: ");
  scanf(" %[^\n]",s);

  removerCaracter(s,c);
  printf("\n\n\t Nova string:  %s",s);
  
  return 0;
}