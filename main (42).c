#include <stdio.h>
#include <string.h>

/*
  Considere a função cuja assinatura é apresentada a seguir:
	
				int pesquisa (char s1[], char s2[], int ordem)

	onde:
		s1		string contendo diversas informações sobre uma pessoa, separadas pelo 
		    	caracter | (também termina com |)
		s2		uma informação a ser buscada em s1
		ordem	ordem na qual s2 deve ser buscada em s1. Por exemplo, se for igual a 3, 
		        a função deve verificar se s2 é a terceira informação dentro de s1.   

	Pede-se a implementação desta função, sabendo que ela deve retornar 1 se s2 estiver 
	em s1 na posição definida por ordem; caso contrário, deve retornar 0.
*/

int pesquisa (char s1[], char s2[], int ordem)
{
	//declaração de variáveis
	int i, j, posicao = 1;
	char novaString[50];
	
	//percorrendo a string até chegar ao seu final ou até se chegar na ordem desejada
	for (i=0;(s1[i])&&(posicao<ordem);i++)
	{
		//verificando se o caracter separados (|) foi encontrado
		if (s1[i] == '|')
		{
			posicao++;
		}
	}
	
	//verificando se toda a string s1 foi percorrida
	if (!s1[i])
	{
		return 0;
	}
	else
	{
		//guardando na nova string a informação de 's1' que está na posição 
		//definida por 'ordem'
		j = 0;
		while (s1[i] != '|')
		{
			novaString[j++] = s1[i++];
		}
		
		//finalizando a novaString com '\0'
		novaString[j] = '\0';
		
		//verificando se a informação na posição 'ordem' é igual a 's2'
		if (strcmp (novaString, s2) == 0)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	
}

int main(void) {
char str1[50];
	char str2[10];
	int resp, ordem;
	
	//Exemplo 01
	printf ("Exemplo 01:\n\n");
	
	//inicializando as duas strings
	strcpy (str1, "JOAO DA SILVA|12345|RIO DE JANEIRO|RJ|");
	strcpy (str2, "12345");
	
	//inicializando a ordem
	ordem = 2;
	
	//exibindo as duas strings
	printf ("\n\nstr1: %s\n", str1);
	printf ("str2: %s\n\n", str2);
	
	//chamando a função
	resp = pesquisa (str1, str2, ordem); //verificando se str2 é a segunda informação de s1
	
	//exibindo o resultado
	if (resp == 0)
	{
		printf ("\n\nA string %s NAO e' a %da. informacao de %s!\n", str2, ordem, str1);
	}
	else
	{
		printf ("\n\nA string %s e' a %da. informacao de %s!\n", str2, ordem, str1);
	}

  //Exemplo 02
	printf ("\n\nExemplo 02:\n\n");
	
	//inicializando as duas strings
	strcpy (str1, "JOAO DA SILVA|12345|RIO DE JANEIRO|RJ|");
	strcpy (str2, "365421");
	
	//inicializando a ordem
	ordem = 2;
	
	//exibindo as duas strings
	printf ("\n\nstr1: %s\n", str1);
	printf ("str2: %s\n\n", str2);
	
	//chamando a função
	resp = pesquisa (str1, str2, ordem); //verificando se str2 é a segunda informação de s1
	
	//exibindo o resultado
	if (resp == 0)
	{
		printf ("\n\nA string %s NAO e' a %da. informacao de %s!\n", str2, ordem, str1);
	}
	else
	{
		printf ("\n\nA string %s e' a %da. informacao de %s!\n", str2, ordem, str1);
	}


	//Exemplo 03
	printf ("Exemplo 03:\n\n");
	
	//inicializando as duas strings
	strcpy (str1, "JOAO DA SILVA|12345|RIO DE JANEIRO|RJ|");
	strcpy (str2, "12345");
	
	//inicializando a ordem
	ordem = 4;
	
	//exibindo as duas strings
	printf ("\n\nstr1: %s\n", str1);
	printf ("str2: %s\n\n", str2);
	
	//chamando a função
	resp = pesquisa (str1, str2, ordem); //verificando se str2 é a segunda informação de s1
	
	//exibindo o resultado
	if (resp == 0)
	{
		printf ("\n\nA string %s NAO e' a %da. informacao de %s!\n", str2, ordem, str1);
	}
	else
	{
		printf ("\n\nA string %s e' a %da. informacao de %s!\n", str2, ordem, str1);
	}
  
  return 0;
}