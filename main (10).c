#include <stdio.h>
#include <string.h>

/*  

string - vetor de char
o vetor sozinho é o endereço
char UF[3] - 0 1 2 - U F \0 - 3 quadradinhos
if (ch=='\0')
printf("nome = %s",nome);
scanf("%s",nome) -> fflush(stdin) ~(esvazia o buffer da entrada padrão - standard input); -> gets(nome) -> string.h

printf("Idade:");
scanf("%d",&idade);
printf("Gênero:");
fflush(stdin);
scanf("%c",&genero);

void funcao (int vetor[],int tamanho)
              int *vetor

nome[7]='\0'; ~ a string acaba na posição 7

s[i] -> c  a  s  a \0
i    -> 0  1  2  3  4  5  6  7

***strlen - tamanho da string - ñ conta o \0
  x=strlen(nome);

***strcpy - copia o conteúdo de uma string - evita criação de variáveis - s2 vira s1 ==> s1=s2 ==> ocupam msm espaço na memória
strcpy(s1,s2); - em um for que acaba no \0 de s2

***strcat - concatenação - junta 2 strings - guarda o resultado em 1/altera s1
strcat(s1,s2) -s1+s2
strcat(s1,s3) -s1+s2+s3

***strcmp - compara 2 strings - strcmpi (ignora maiusculo e minusculo)
if (strcmp(s1,s2)==0) ~se retornar 0, são iguais

if (x!=0) -->  if (x)
!  -->não é/diferente de
if (!x)
while(strcmp(s,"")==0) --> !strcmp(s,"")
*/

//Exemplo 1: Determinar o número de ocorrências de determinados caracteres na string.

/* Sem strlen

int numOcorrencias (char s[], char ch){
  int i,cont=0;
  for(i=0;s[i]!='\0';i++){
    cont++;
  }
  return cont;
}

strlen(s) - n usa & pq é o endereço da 1ª posição do vetor

                    0  1  2
string[0]='\0'; --> \0
strcpy(string,"");
*/

int strTamanho (char s[]){
  int i;
   for(i=0;s[i]!='\0';i++);
  //ou for(i=0;s[i];i++);
  
  //ou for(i=0;i<strlen(s);i++);
  //ou tam=strlen(s);
  // for(i=0;i<tam;i++);

  return i;
}

int main(void) {
  //Declaração de variáveis
  char palavra[30], letra;
  int quant;

  //Lendo os dados
  printf("Entre com uma palavra: ");
  fflush(stdin);
  gets(palavra);
  printf("Entre com a letra a ser buscada: ");
  fflush(stdin);
  scanf("%c",&letra);

  //Chamando a função
quant=numOcorrencias(palavra, letra);

  //Exibindo o resultado
  printf("Foram encontradas %d ocorrências da letra %c na string %s",quant,letra,palavra);
  
  return 0;
}