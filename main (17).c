#include <stdio.h>
#include <string.h>

//strlen - diz o tamanho numérico de uma string

int strTamanho (char s[]){
  int i;

    for(i=0; s[i]; i++); //s[i] -- enquanto não achar o \0

  return i;
}

/*
//implementação das funções
int strTamanho (char s[])
{
	//declaração de variáveis
	int i;//, cont = 0;
	
	//percorrendo toda a string
	for (i=0;s[i];i++);     //s[i]!='\0'
	//{
		//cont++;
	//}
	
	//retornando o resultado
	return i;//cont;
}
*/

int main(void) {
char s1[20];

  printf("\n Digite uma string: ");
  scanf(" %[^\n]",s1);

  printf("\n\n--------- com STRLEN -------------\n string: %zu caracteres",strlen(s1)); 

  printf("\n\n--------- com FUNÇÃO -------------\n string: %d caracteres", strTamanho(s1));

  /*
//declaração de variáveis
	char s[30];
	int quant;
	
	//leitura da string
	printf ("Entre com uma string: ");
	fflush (stdin);
	gets (s);
	
	//chamando a função strlen
	quant = strTamanho (s);
	
	//exibindo o resultado
	printf ("\n\nA string %s possui %d caracteres!", s, quant);	
    */
    return 0;
}