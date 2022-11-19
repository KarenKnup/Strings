#include <stdio.h>

/*

scanf com o especificador de formato %c (cont.):
- não pula os "caracteres brancos" = espaço (' '), tabulação ('\t') ou nova linha ('\n')

- se o usuário teclar um espaço antes da letra:
  * o código do espaço será capturado -- o espaço conta
    0 1 2 3 4 5 6 7  8 9 -- string[10] de 10 chars
    B o m   d i a \0 (\0 ou NULL = determinador de onde acaba)
OBS: string -- vetor de char

  * a letra será capturada apenas na próxima chamada de scanf

- para pular todos os "caracteres brancos" antes do caractere:
  * basta incluir um espaço em branco no formato, antes do especificador --> scanf(" %c",&x);

  */

int main(void) {

char c = 'a';

printf("\n %d é %c\n", c, c);

  //---------------------------

  char x;

  printf("\n\nDigite um caractere: ");
  scanf(" %c",&x);

  printf("\n\n\tChar digitado: %c",x);
  
  return 0;
}