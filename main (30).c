/*
	FPR - Fundamentos de Programaçãop
	Professor Leonardo Vianna
	2022/2						Turma: Manhã
	Data: 25/08/2022
	
	Exemplo 1: uso da função strlen
*/

//importação de bibliotecas
#include <stdio.h>
#include <string.h>

//main
int main (void) {
	//declaração de variáveis
	char s[30];
	int quant;
	
	//leitura da string
	printf ("\n\nEntre com uma string: ");
	fflush (stdin);
	gets (s);
	
	//chamando a função strlen
	quant = strlen (s); //calcula já sem o \0
	
	//exibindo o resultado
	printf ("\n\nA string %s possui %d caracteres!", s, quant);	
}