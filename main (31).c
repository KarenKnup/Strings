/*
	FPR - Fundamentos de Programação
	Professor Leonardo Vianna
	2022/2						Turma: Manhã
	Data: 25/08/2022
	
	Exemplo 2: uso da função strcpy
*/

//importação de bibliotecas
#include <stdio.h>
#include <string.h>

//main
int main (void)
{
	//declaração de variáveis
	char s1[30], s2[30];
		
	//leitura da string
	printf ("\n\nEntre com uma string: ");
	fflush (stdin);//buffer
	gets (s1);
	
	//exibindo as duas strings antes da cópia
	printf ("\nExibindo as duas strings antes da copia:");
	printf ("\ns1: %s", s1);
	printf ("\ns2: %s", s2);
	
	//copiando a string s1 para s2
	strcpy (s2, s1);
	
	//exibindo as duas strings depois da cópia
	printf ("\n\nExibindo as duas strings depois da copia:");
	printf ("\ns1: %s", s1);
	printf ("\ns2: %s", s2);
  }