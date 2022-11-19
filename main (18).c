#include <stdio.h>
#include <string.h>

//strcat - concatena (junta/cola) 2 strings - não precisa de ponteiro pq já altera na main

void strConcatenar (char s1[], char s2[]){
 int i,j; 

for (i=strlen(s1), j=0; s2[j]; i++,j++){ //s2[j] - enquanto não achar o \0
    s1[i]=s2[j]; 
  }
  
//finalizando a string 1
s1[i]='\0';  //i - última posição 
}

/*
//implementação das funções
void strConcatenar (char string1[], char string2[])
{
	//declaração de variáveis
	int i, j;
	
	//percorrendo a string2
	for (i=strTamanho(string1),j=0;string2[j];i++,j++)
	{
		string1[i] = string2[j];
	}
	
	//finalizando a string1
	string1[i] = '\0';
}

int strTamanho (char s[])
{
	//declaração de variáveis
	int i;//, cont = 0;
	
	//percorrendo toda a string
	for (i=0;s[i];i++);       //s[i]!='\0'
	//{
		//cont++;
	//}
	
	//retornando o resultado
	return i;//cont;
}
*/

int main(void) {
char s1[20], s2[20], s3[20], s4[20];

  printf("\n Digite a string 1: ");
  scanf(" %[^\n]",s1);
  printf(" Digite a string 2: ");
  scanf(" %[^\n]",s2);

  printf("\n\n--------- com FUNÇÃO -------------\n");
strConcatenar(s1,s2);
 printf("\t string 1: ");
  puts(s1);
   printf("\t string 2: ");
  puts(s2);


  printf("\n\n--------- com STRCAT -------------\n  ");
  printf("\n\n Digite a string 3: ");
  scanf(" %[^\n]",s3);
  printf(" Digite a string 4: ");
  scanf(" %[^\n]",s4);
  
  
  strcat(s3,s4); //s1 vira s1+s2, mas s2 não muda
  printf("\n\n\t string 3: ");
  puts(s3);
  printf("\t string 4: ");
  puts(s4);

  /*
//declaração de variáveis
	char s1[30], s2[30];
		
	//leitura das strings
	printf ("Entre com a primeira string: ");
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
	strConcatenar (s1, s2);
	
	//exibindo as duas strings depois da concatenação
	printf ("\nExibindo as duas strings depois da concatenacao:");
	printf ("\ns1: %s", s1);
	printf ("\ns2: %s", s2);
    */
  
  
  return 0;
}