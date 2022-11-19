#include <stdio.h>
#include <string.h>

//strcpy (string copy) - copia o que está numa string e coloca em outra 

void strCopy (char s1[], char s2[]){
  int i;
  
  for (i=0;s2[i];i++){
    s1[i]=s2[i];
}
//finalizando a string 1
s1[i]='\0'; 

}

/*
//implementação das funções
void strCopiar (char s1[], char s2[])
{
	//declaração de variáveis
	int i;
	
	//percorrendo s2
	for (i=0;s2[i];i++)
	{
		s1[i] = s2[i];
	}
	
	//finalizando a string s1 com '\0'
	s1[i] = '\0';
}
*/

int main(void) {
char s1[20], s2[20];

  //Com STRCPY
  printf("\n Digite a string 1: ");
  scanf(" %[^\n]", s1);

  printf("\n\n--------- com STRCPY -------------\n string 1: ");
  strcpy(s2,s1);
  puts(s1);
  printf("\n string 2: ");
  puts(s2);

  //Com uma função
  printf("\n\n--------- com FUNÇÃO -------------\n string 1: ");
  strCopy(s1,s2);
printf("%s\n string 2: %s",s1,s2);

  /*
//declaração de variáveis
	char origem[30], destino[30];
		
	//leitura da string
	printf ("Entre com uma string: ");
	fflush (stdin);
	gets (origem);
	
	//exibindo as duas strings antes da cópia
	printf ("\nExibindo as duas strings antes da copia:");
	printf ("\norigem: %s", origem);
	printf ("\ndestino: %s", destino);
	
	//copiando a string origem para destino
	strCopiar (destino, origem);
	
	//exibindo as duas strings depois da cópia
	printf ("\n\nExibindo as duas strings depois da copia:");
	printf ("\norigem: %s", origem);
	printf ("\ndestino: %s", destino);
    */
  
  return 0;
}