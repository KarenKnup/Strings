#include <stdio.h>
#include <string.h>

//strcmp - compara 2 strings
//letras minúsculas têm valores maiores 

int strComparar (char s1[], char s2[]){
int i; 

for (i=0; s1[i]==s2[i]&&(s1[i] /*~enquanto s1 não achar \0*/)&&(s2[i]); i++); //essa função vai funcionar enquanto essas condições forem verdadeiras

return s1[i]-s2[i]; 

/*
//if (s1[i] == s2[i])
if ((s1[i]=='\0') && (s2[i]=='\0')){
return 0;
} else {
   if (s1[i]> s2[i] ) {
return 1;}
} 

return -1
*/
}

/*   VERSÃO 1

//implementação das funções
int strComparar (char string1[], char string2[])
{
	//declaração de variáveis
	int i;
	
	//percorrendo as strings
	for (i=0;(string1[i]==string2[i])&&(string1[i])&&(string2[i]);i++);

	//retornando o resultado
	//if ((string1[i] == '\0') && (string2[i] == '\0'))
	if (string1[i] == string2[i])
	{
		return 0;
	}
	else
	{
		if (string1[i] > string2[i])
		{
			return 1;
		}
		else
		{
			return -1;
		}
	}
}
*/

/*/*
//implementação das funções
int strComparar (char string1[], char string2[])
{
	//declaração de variáveis
	int i;
	
	//percorrendo as strings
	for (i=0;(string1[i]==string2[i])&&(string1[i])&&(string2[i]);i++);

	//retornando o resultado
	return string1[i] - string2[i];
	
/*	//retornando o resultado
	//if ((string1[i] == '\0') && (string2[i] == '\0'))
	if (string1[i] == string2[i])
	{
		return 0;
	}
	else
	{
		if (string1[i] > string2[i])
		{
			return 1;
		}
		else
		{
			return -1;
		}
	}*/
//}
//*/*/

int main(void) {
char s1[20]="Oi", s2[20]="Oi", s3[20]="AI", s4[20]="LUUUUUUUV LUX ", s5[20]="OI";

printf("\nString 1: ");
  puts(s1);
printf("\nString 2: ");
  puts(s2);
printf("\nString 3: ");
  puts(s3);
printf("\nString 4: ");
  puts(s4);
printf("\nString 5: ");
  puts(s5);
  
   printf("\n\n--------- com STRCMP  -------------\n");
  printf("\t\t\nprimeira string - segunda string\n\n");
printf("%d -- s1 e s2 -- strings IGUAIS -- s1=s2", strcmp(s1,s2));
printf("\n%d -- s1 e s5 -- strings PARCIALMENTE IGUAIS -- s1>s5", strcmp(s1,s5));
printf("\n%d -- s5 e s1 -- strings PARCIALMENTE IGUAIS -- s1>s5", strcmp(s5,s1));
printf("\n%d -- s1 e s4 -- strings DIFERENTES -- s1>s4",strcmp(s1,s4));
printf("\n%d -- s4 e s1 -- strings DIFERENTES -- s1>s4",strcmp(s4,s1));
  
  /*
Ou seja: strcmp(s1,s2) --> s1-s2 = r

0 -- iguais
(-) -- s2>s1
(+) -- s1>s2

    */


   printf("\n\n--------- com FUNÇÃO -------------\n");
printf("\n%d -- s1 e s2 -- strings IGUAIS -- s1=s2", strComparar(s1,s2));
printf("\n%d -- s1 e s2 -- strings IGUAIS -- s1=s2", strComparar(s2,s1));

printf("\n%d -- s1 e s5 -- strings PARCIALMENTE IGUAIS -- s1>s5", strComparar(s1,s5));
  
printf("\n%d -- s5 e s1 -- strings PARCIALMENTE IGUAIS -- s1>s5", strComparar(s5,s1));

  /*
//declaração de variáveis
	char s1[30], s2[30];
	int retorno;
		
	//leitura das strings
	printf ("Entre com a primeira string: ");
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
	retorno = strComparar (s1, s2);
	if (retorno == 0)
	{
		printf ("\n\nAs strings %s e %s sao iguais!", s1, s2);
	}
	else
	{
		printf ("\n\nAs strings %s e %s nao sao iguais!", s1, s2);
		printf (" (retorno = %d)", retorno);
	}
    */
  
  return 0;
}