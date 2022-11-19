#include <stdio.h>
#include <stdlib.h>
#include <stdnoreturn.h>
#include <string.h>

#define TAM 50 

//A função strcat junta uma string ao final de outra. Sintaxe: strcat (string1, string2); Como resultado desse comando, o valor de string2 é anexado ao final de string1.

void citaNome(char nome[],char sobrenome[],char citacao[]){
  strcat(citacao,sobrenome);
  strcat(citacao,", ");
  strcat(citacao,nome);
}

int main(void) {
  char nome[TAM],sobrenome[TAM],citacao[TAM];
  
printf("\nDigite um nome:  ");
  scanf(" %[^\n]",nome);
  printf("Digite um sobrenome:  ");
  scanf(" %[^\n]",sobrenome);
  
   citaNome(nome,sobrenome,citacao);
  
    printf("\n---------- Frase em strcat: --------\n");
  printf("\n%s",citacao);
  
  return 0;
}