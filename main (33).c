/*
	FPR - Fundamentos de Programaçãop
	Professor Leonardo Vianna
	2022/2						Turma: Manhã
	Data: 25/08/2022
	
	Exemplo 4: uso da função strcmp
*/

//importação de bibliotecas
#include <stdio.h>
#include <string.h>

//main
int main (void)
{
	//declaração de variáveis
	char s1[30], s2[30];
	int retorno;
		
	//leitura das strings
	printf ("\n\nEntre com a primeira string: ");
	fflush (stdin);
	gets (s1);
	
	printf ("\nEntre com a segunda string: ");
	fflush (stdin);
	gets (s2);
	
	//exibindo as duas strings
	printf ("\nExibindo as duas strings:");
	printf ("\ns1: %s", s1);
	printf ("\ns2: %s", s2);
	
	//verificando se as strings são iguais ou não
	retorno = strcmp (s1, s2);
	if (retorno == 0)
	{
		printf ("\n\nAs strings %s e %s são iguais!", s1, s2);
	}
	else
	{
		printf ("\n\nAs strings %s e %s não são iguais!", s1, s2);
		printf (" (retorno = %d)", retorno);
	}
}	