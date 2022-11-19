#include <stdio.h>
#include <string.h>

//Inverter uma string;

void Inverte (char s[]){
  char caracter;
  int a, b;

  for(a=0, b=strlen(s)-1;  a<b;  ++a, b--)
  {
    caracter = s[a];
    s[a] = s[b];
    s[b] = caracter;
  }
}

int main(void) {
char s[20];

  printf("\nDigite uma string: ");
  scanf(" %[^\n]",s);
  
  Inverte(s);
  
  printf("\n\n\tString invertida: %s",s);
  
  return 0;
}