/*
	FPR - Fundamentos de Programaçãop
	Professor Leonardo Vianna
	2022/2						Turma: Manhã
	Data: 25/08/2022
	
	Exemplo 3: uso da função strcat
*/

//importação de bibliotecas
#include <stdio.h>
#include <string.h>

//main
int main (void)
{
	//declaração de variáveis
	char s1[30], s2[30];
		
	//leitura das strings
	printf ("\n\nEntre com a primeira string: ");
	fflush (stdin);
	gets (s1);
	
	printf ("\nEntre com a segunda string: ");
	fflush (stdin);
	gets (s2);
	
	//exibindo as duas strings antes da concatenação
	printf ("\nExibindo as duas strings antes da concatenacao:");
	printf ("\ns1: %s", s1);
	printf ("\ns2: %s", s2);
	
	//concatenando as strings
	strcat (s1, s2);
	
	//exibindo as duas strings depois da concatenação
	printf ("\n\nExibindo as duas strings depois da concatenacao:");
	printf ("\ns1: %s", s1);
	printf ("\ns2: %s", s2);
}