#include <stdio.h>
#include <string.h>

/*
Implementar uma função que, dadas duas strings s1 e s2, crie uma nova string – s3 – contendo todos os caracteres de s1 que não estejam em s2.

Nota: em s3, não devem existir caracteres repetidos
  */

void Variaveis (char *s1, char *s2){
printf("\nDigite a primeira string: ");
  scanf(" %[^\n]",s1);
  printf("Digite a segunda string: ");
  scanf(" %[^\n]",s2);  
}

int buscar (char s[], char c) { //se o char for encontrado retorna i, senão retorna -1
  int i;

  for (i=0; s[i]; i++){
    if (s[i]==c){
      return i;
    }
  }
  return -1;
}

void questao3 (char s1[], char s2[], char s3[]){
  int i, j=0; //j = contador de s3
 // strcpy(s3, ""); //ou s3[0]='\0'

  //s1[i] == enquanto s1[i] for diferente de \0
  for (i=0; s1[i]; i++){ // i = contador de s1
    if ((buscar(s2,s1[i])==-1) && (buscar(s3,s1[i])==-1)/*essa segunda condição faz os elementos não se repetirem em s3*/){
      //busca em s2 os elementos de s1, se não achar o elemento em s2:
      /*(com o && ele nem verifica a segunda sentença se a primeira for falsa*/
      s3[j]=s1[i]; //o elemento de s3 vira o de s1
      s3[j+1]='\0';//a cada vez que um j é adicionado, o \0 é colocado a seguir
      j++;
    }
  }
}

int main(void) {
char s1[20], s2[20], s3[20];

  Variaveis(s1,s2);
  questao3(s1,s2,s3);
  printf("\n\n\tstring 3: %s",s3);
  
  return 0;
}