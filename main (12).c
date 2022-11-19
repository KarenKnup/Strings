#include <stdio.h>
#include <string.h>

/*
Desenvolver uma função que, dada uma strings, crie uma substring que inicie na posição p de s e contenha n caracteres.

Observações: se p e/ou n forem inválidos, a substring será vazia; 
ii) se s não possuir n caracteres além de p, a substring a ser criada começará em p e terminará no final de s.

s->   A L G O R I T M O S \0
      0 1 2 3 4 5 6 7 8 9  10 ...
              p  
sub-> R I T M O \0
      0 1 2 3 4 5 ...
      j j j
  */


void substring (char s[], int p, int n, char sub[]){
  int i, j;
  
  if ((p<0) || (p>=strlen(s) || (n<=0))){//condições para não funcionar -- string vazia
    strcpy(sub,""); //sub[0]='\0'; -- a primeira posição é o término da string
  } else{//funciona
    for (i=p, j=0; ((j<n) && (s[i]));i++, j++){
      sub[j]=s[i]; ;
    }
  }
  sub[j]='\0'; //finalizando sub
}


int main(void) {
char s1[20], sub[20];
int pos, n=strlen(s1); //n = quantidade de caracteres de s1  
  
  printf("\nDigite a string: ");
  scanf(" %[^\n]", &s1);
  printf("Digite a posição desejada (p): ");
  scanf("%d", &pos);
  substring(s1,pos,n,sub);
  printf("\n\n\t\tSubstring: %s",sub);
  
  
  return 0;
}