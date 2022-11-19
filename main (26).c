/*Desenvolver uma função que remova de uma string s os caracteres compreendidos entre as posições p1 e p2.
Caso p1 ou p2 seja uma posição inválida, a função deverá retornar o valor 0 e a remoção de caracteres solicitada não será realizada; 
caso contrário, deverá retornar 1 e proceder com o que foi pedido.*/

#include <stdio.h>
#include <string.h>

int removerIntervalo (char s[], int p1, int p2){
  int i, j;
  if( (p1>p2) || (p1<0) || (p2>=strlen(s)) ){//p1 e/ou p2 inválidos
    return 0;
  }
  //else { não é necessário pois o if anterior contém um return
    for (i=p1,j=p2+1; s[j] ;i++,j++){
      s[i]=s[j];//s[p1]=s[p2+1] -- o primeiro elemento da p1 vira o elemento depois da p2 e assim sucessivamente  
      //ex: batata - p1=2 e p2=3 - bata
    //s[2]=s[4] - s2 vira s4 - ba"t"a"t"a
    //s[3]=s[5] - s3 vira s5 - bat"a"t"a"
      
    }
  //}
  
  s[i]='\0'; //finalizando s[i]
  
  return i;
}

int main(void) {
char s[20];
int p1, p2;

  printf("\nDigite uma string: ");
    scanf(" %[^\n]",s);
  printf("Digite a primeira posição: ");
  scanf("%d",&p1);
  printf("Digite a segunda posição: ");
  scanf("%d",&p2);

  removerIntervalo(s,p1,p2);
  printf("\n\n\t\tString sem os elementos entre p1 e p2: %s",s);
  
  return 0;
}