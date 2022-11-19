#include <stdio.h>
#include <string.h>

#define TAM 63

void preencheStrings(char string[],char *ch1,char *ch2){
  printf("\nDigite a string: ");
  scanf(" %[^\n]",string);
  printf("Digite o caractere que deseja mudar: ");
  scanf(" %c",&*ch1);
  printf("Qual o novo caractere? ");
  scanf(" %c",&*ch2);
}

int substituiChar(char string[],char ch1,char ch2){
  int i,j=0;
  for(i=0;string[i]!='\0';i++){
    if(string[i]==ch1){
      string[i]=ch2;
      j++;
    }
  }
  return j;
}

int main(void) {
  int i;
  char sinicial[TAM],ch1,ch2;
  
  preencheStrings(sinicial,&ch1,&ch2);
  i=substituiChar(sinicial,ch1,ch2);
  
  printf("\n\nA nova string é %s. \nForam substituídos %d caracter(es).",sinicial,i);
  
  return 0;
}