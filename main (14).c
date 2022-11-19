#include <stdio.h>
#include <string.h>

/*
s -> E X E R C I C I O \0
     0 1 2 3 4 5 6 7 8  9 10 11

E X R C I O
  */


#define TRUE 1 //apareceu já
#define FALSE 0 //não apareceu ainda

  int quantDistintos (char s[]){
    int i, j, encontrou, cont;

      for (i=0; s[i]; i++){//esse for percorre todo s[i]
        encontrou=FALSE; //por enquanto não achou nada, então encontrou é falso

        for (j=0; j<i; j++){//j<i = !encontrou = && encontrou==False
          //esse for percorre todo s[j], sendo que "i" está na frente e "j" atrás -- cada posição de "i" é comparada com  todas de "j"
          if (s[j]==s[i]){
            encontrou=TRUE; //encontrou é verdadeiro, ou seja, já apareceu antes
            break; //significa que já achou, então não precisa procurar adiante
          }
        }
        if (encontrou==FALSE){ cont++; } //dentro do for de "i" 
        //se encontrou for igual a falso, ou seja, ainda não apareceu na contagem, adiciona na contagem de letras distintas
      }    

    return cont; // sem o \0
  }

int main(void) {
char s[20];

  printf("\n Digite uma palavra:  ");
  scanf(" %[^\n]", s);

  printf("\n\tHá %d letras distintas na string %s",quantDistintos(s),s);
  
  return 0;
}