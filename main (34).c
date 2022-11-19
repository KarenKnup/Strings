#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//STRING -- s[] -- vetor de CHAR

void imprime (char s[]){
  int i;

  for(i=0;s[i];i++){ //s[i]!='\0' --vai funcionar enquanto não chegar no \0 -- o enter
    printf("%c",s[i]);
    printf("\n");
  }
}

void imprime2 (char s[]){
    printf("%s \n",s); 
}

int comprimento (char s[]){
  int i;//contador de caracteres/posição de cada char no vetor

  for(i=0;s[i];i++);
  
  return i;
}

void copia (char destino[], char origem[]){
  int i; //copia a origem no destino

  for (i=0;origem[i];i++){
    origem[i]=destino[i]; //o que tá na origem vai para o destino
  }
}

void concatena (char destino[], char origem[]){
  int i; //contador do destino
  int j; //contador da origem

  for (i=strlen(destino),j=0; origem[j] ;i++,j++){
    destino[i]=origem[j]; //adicionando a origem no destino sem apagar o conteúdo do destino
  }
  
  //finalizando a string destino
destino[i]='\0';  //i - última posição 
}

int compara (char s1[], char s2[]){
  int i; 

  for (i=0; (s1[i]==s2[i])&&(s1[i])&&(s2[i]) ;i++);

  return s1-s2;
}

int main(void) {

  printf("\n\t------ PRINT DE UMA STRING: ----- \n");
char cidade[ ] = "Rio";
printf("\n%s \n", cidade);

  //é a mesma coisa que:

  char cidade2[ ]={'R', 'i', 'o', '\0'};
printf("\n%s \n", cidade2);

  /*  0 1 2 3 4 5 6 7  8 9 -- string[10] de 10 chars
    B o m   d i a \0 (\0 ou NULL = determinador de onde acaba) */
  
 printf("\n---------------------------------------\n");
  
  // O I   M a e ! \0
  // 0 1 2 3 4 5 6 7  8 9 
 char s[10]="OI Mae!";
  printf("\n\tSerá exibido: %s",s);
  printf("\n\n\tSerá exibido: %s",&s[3]);
  printf("\n\n\tSerá exibido: %s",s+6); 

  printf("\n---------------------------------------\n");
  printf("\n\t------ PRINT DE PALAVRAS COMPOSTAS: ----- \n");
  int dia=2;
char cidade3[30],cidade4[30];

  /*
printf ("\n\nDigite o dia da viagem: ");
scanf("%d",&dia);*/

printf ("\nDigite o nome da cidade origem ");
scanf("%s",cidade3);

  /* scanf com %s:
      * lê uma cadeia de caracteres NÃO BRANCOS -- pula os brancos
      * não se usa & pq é um vetor de char */

printf ("Digite o nome da cidade destino ");
scanf("%s",cidade4);

printf("\n\tVoce deseja viajar dia %d de %s para %s", dia, cidade3,cidade4);

//PROBLEMAS COM CIDADES COM NOMES COMPOSTOS !!!!! ---Qualquer branco ( enter, space bar ou tab) é considerado o finalizador da entrada de dados

  printf("\n---------------------------------------\n");
  
/*  scanf com o especificador de formato %[...]:

- %[...] --- lista entre os colchetes todos os caracteres
aceitos na leitura

- %[^...] --- lista entre os colchetes todos os caracteres
NÃO aceitos na leitura

exemplos:
1- %[aeiou] --- lê seqüências de vogais
           --- leitura prossegue até encontrar um caractere que não seja uma vogal

2- %[^aeiou] --- lê seqüências de caracteres que não são vogais
            --- leitura prossegue até encontrar um caractere que seja uma vogal

- scanf (" %[^\n]", string); --- Aceita qualquer caractere menos o <enter> --- lê as palavras compostas agora e pula os brancos da frente
                            --- leitura prossegue até encontrar o caractere ‘\n’ (<enter>), isto é, apenas quando o usuário digitar <enter> a leitura é interrompida
  */

   int dia2=2;
char cidade5[30]="São Paulo",cidade6[30]="Rio de Janeiro"; //avise ao usuário que o limite são 30 CARACTERES

  /*
printf ("\n\nDigite o dia da viagem: ");
scanf("%d",&dia);*/

printf ("\nDigite o nome da cidade origem ");
scanf(" %[^\n]",cidade5);

  /* scanf com %s:
      * lê uma cadeia de caracteres NÃO BRANCOS -- pula os brancos
      * não se usa & pq é um vetor de char */

printf ("Digite o nome da cidade destino ");
scanf(" %[^\n]",cidade6);

printf("\n\tVoce deseja viajar dia %d de %s para %s", dia2, cidade5,cidade6);

  printf("\n---------------------------------------\n");
/*
- strings C não são como outras variáveis (são VETORES)
  * Não se pode atribuir ou comparar:
      char umaString[10];
      umaString = "Olá"; // ILEGAL!

  * Em C, str = "…" só vale na declaração de str!
      Também não se pode usar o operador ==
      char umaString[10] = "Olá";
      char outraString[10] = "Até logo";
      
      if( umaString == outraString) // NÃO permitido!

- Operações ausentes
      * Não existe operador de atribuição para strings.
      * Não existe operadores de comparação para strings
      * Não existe operadores para juntar strings
      * Mas existem funções da linguagem que executam estas
      tarefas: biblioteca string.h

- Funções para manipular cadeias de caracteres
* "imprime"
* "comprimento" - strlen
* "copia" - strcpy
* "concatena" - strcat
* "compara" - strcmp
  */

  /*
- FUNÇÃO "IMPRIME"
      * Imprime uma cadeia de caracteres, caractere por caractere,
com uma quebra de linha ao final.
    */

  printf("\n\t------ FUNÇÃO IMPRIME: ----- \n");
  char s3[20]="Batata!", s4[20]="Batata!"; //string de 20 caracteres
  imprime(s3);
  //printf("%s",s3); //não precisa usar pq a função já imprime

  printf("\n\n");
  imprime2(s4);
  
  printf("\n---------------------------------------\n");
  /*
- FUNÇÃO "COMPRIMENTO"
      * retorna o comprimento de uma cadeia de entrada s
      * conta o número de caracteres até encontrar o caractere nulo
      * o caractere nulo em si NÃO é contado
    */
  char s5[20]="Oi!";

  printf("\n\t------ FUNÇÃO COMPRIMENTO: ----- \n");
  
printf("\n %d caracteres", strlen(s5));
printf("\n %d caracteres",comprimento(s5));
  
  printf("\n---------------------------------------\n");
/*
- FUNÇÃO "COPIA"
      * copia os elementos de uma cadeia de origem (orig) para uma cadeia de destino (dest)
      * cadeia de destino deverá ter espaço suficiente
*/
  printf("\n\t------ FUNÇÃO COPIA: ----- \n");
  char s6[20]="Oi!", s7[20];
  char s8[20]="Oi!", s9[20];

  //(destino, origem)
  strcpy(s7,s6);
  printf("\n s6: %s \n s7: %s",s6,s7); //note que a string 6 não muda, continua a mesma

  copia(s8,s9);
  printf("\n\n s8: %s \n s9: %s",s8,s9);
  
    printf("\n---------------------------------------\n");
  printf("\n\t------ FUNÇÃO CONCATENA: ----- \n");
  /*
- copia os elementos de uma cadeia de origem (orig)
para o final da cadeia de destino (dest)
    */

  char s10[20]="Oi!", s11[20]="Tudo bem?";
  char s12[20]="Oi!", s13[20]="Tudo bem?";

  strcat(s10,s11); //(destino, origem) -- junta a segunda na primeira
  printf("\n s10: %s \n s11: %s",s10,s11);

  concatena(s12,s13);
  printf("\n\n s12: %s \n s13: %s",s12,s13);
  
    printf("\n---------------------------------------\n");
  
  printf("\n\t------ FUNÇÃO COMPARA: ----- \n");
  char s14[20]="Oi!", s15[20]="Tudo bem?", s16[20]="Oi!", s17[20]="OI!", s18[20]="OII!";

  printf("\n s14: %s\n s15: %s\n s16: %s\n s17: %s\n s18: %s\n\n",s14,s15,s16,s17,s18);
  
  printf("\n >>> s1 e s2 = s1-s2 <<<\n\n s14 e s16: %d --- 0 = iguais \n\n s14 e s17: %d --- (+) = s14>s17 \n s14 e s18: %d --- (+) = s14>s18 \n\n s17 e s14: %d --- (-) = s14>s17 \n s14 e s15: %d --- (-) = s14 ≠ s17", strcmp(s14,s16), strcmp(s14,s17), strcmp(s14,s18), strcmp(s17,s14), strcmp(s14,s15));

  printf("\n\n\n\n s14 e s16: %d --- 0 = iguais",compara(s14,s16));
  
    printf("\n---------------------------------------\n");
  
    return 0;
}