
//Desenvolver uma função que, dada uma strings, determine se todos os seus caracteres são distintos.

#include <stdio.h>
#include <string.h>

//Tamanho da string:
#define TAM 20

#define TRUE 1 // caractere apareceu já
#define FALSE 0 //caractere não apareceu ainda

void preenche (char s[]){
  printf("\nDigite uma string de até 20 letras/caracteres: ");
  scanf(" %[^\n]",s);
}

int busca (char s[]){
  int i, j, apareceu;

  for (i=0; s[i]; i++){//esse for percorre todo o s[i]
    apareceu=FALSE; //por enquanto não achou nada, então apareceu é falso
    for (j=0; j<i; j++){//esse for percorre todo s[j], sendo que "i" está na frente e "j" atrás -- cada posição de "i" é comparada com  todas de "j"
      if(s[j]==s[i]){
        apareceu=TRUE;
        break; //significa que já achou, então não precisa procurar adiante
      }
    }
  }
  return apareceu;
}

void exibe (char s[]){
  if(busca(s)==0){
      printf("\n\tA string %s possui todos os caracteres distintos!",s);
    } else{
      printf("\n\tA string %s NÃO possui todos os caracteres distintos!",s);
    }  
}

int main(void) {
  char s[TAM];

  preenche(s);
  exibe (s);
  
  
  return 0;
}