#include <stdio.h>
#include <string.h>

#define TAM 50


void mistura(char nome[],char sobrenome[],int n,char misturado[]){
  int j,k,i=0;
  for(j=0;j<n;j++){
    misturado[i]=nome[j];
    misturado[i+1]=sobrenome[j];
    i+=2;
  }
  k=j;
  while(nome[k]!='\0'){
    misturado[i]=nome[k];
    i++;
    k++;
  }
  while(sobrenome[j]!='\0'){
    misturado[i]=sobrenome[j];
    i++;
    j++;
  }
}

int main(void) {
  char nome[TAM],sobrenome[TAM],misturado[TAM];
  int n;
 
  printf("\nDigite um nome: ");
  scanf(" %[^\n]",nome);
  printf("Digite um sobrenome: ");
  scanf(" %[^\n]",sobrenome);
  
  printf("Digite a quantidade de caracteres a serem intercalados: ");
  scanf("%d",&n);
  
  mistura(nome,sobrenome,n,misturado);
  
  printf("\n\nO nome novo é %s.",misturado);
  
  return 0;
}