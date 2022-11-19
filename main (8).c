#include <stdio.h>
#include <string.h>

#define TAM 63

void preencheStrings(char dep[],char disc[]){
  printf("\nQual o código do departamento? ");
  scanf(" %[^\n]",dep);
  printf("Qual o código da disciplina? ");
  scanf(" %[^\n]",disc);
}

void preencheURL(char dep[],char disc[],char url[]){
  strcat(url,"www.");
  strcat(url,dep);
  strcat(url,".puc-rio.br/~");
  strcat(url,disc);
}

int main(void) {
  char dep[TAM],disc[TAM],url[TAM];
  
  preencheStrings(dep,disc);
  preencheURL(dep,disc,url);
  
  printf("\n\nO caminho de acesso ao site é %s",url);
  return 0;
}