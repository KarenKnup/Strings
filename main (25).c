/*Desenvolver uma função, em C, que, dada uma string s e dada uma posição p desta string, crie duas novas strings: 
s1 com os caracteres de s das posições 0 a p-1;
e s2 com os caracteres de s da posição p à última.

Nota: Caso p seja uma posição inválida, a função deverá retornar o valor 0; caso contrário, procederá com a criação das duas strings e retornará o valor 1.*/

#include <stdio.h>
#include <string.h>

int quebraString (char s[], int p, char s1[], char s2 []){
  int i,j; //i = contador do s1 / j = contador do s2
  
  if ((p<0)||(p>= strlen(s))){
    return 0; // se p for inválido
  }
  else { // p é válido
    for (i=0; i<p; i++){//s1 vai do 0 (i=0) até o "p"
      s1[i]=s[i];
    }
    
    s1[i]='\0'; //finalizando s1
    
    for (i=p,j=0; s[i] /*enquanto s[i] ser diferente de \0*/;i++,j++){//s2 vai do p (i=p) até o fim
      s2[j]=s[i];
    }
    
    s2[j]='\0'; //finalizando s2
    
    return 1;
  }
}


int main(void) {
char s[20],s1[20],s2[20];
int p;

  printf("\nDigite a string: ");
  scanf(" %[^\n]",s);
  printf("Digite uma posição da string: ");
  scanf("%d",&p);

  if ((quebraString(s,p,s1,s2))==0) {
    printf("\n\t Posição 'p' inválida!");
  } else {
    printf("\n\tstring 1: %s \n\tstring 2: %s",s1,s2);
  }
  
    
  return 0;
}