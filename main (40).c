#include <stdio.h>

int main(void) {
/*  
A formatted string can be created with the sprintf() function. This is useful for building a string from other data types. 
 
For example:  */
  char info[100];  
char dept[ ] = "HR";  
int emp = 75;  
sprintf(info, "The %s dept has %d employees.", dept, emp);  
printf("%s\n", info);  

  /* Another useful function is sscanf() for scanning a string for values. The function reads values from a string and stores them at the corresponding variable addresses. 
For example: */
  char info[ ] = "Snoqualmie WA 13190";  
char city[50];  
char state[50];  
int population;  
sscanf(info, "%s %s %d", city, state, &population);  
printf("%d people live in %s, %s.", population, city, state);  


  /* The stdio.h library contains the following functions for converting a string to a number: 

--- int atoi(str) Stands for ASCII to integer. Converts str to the equivalent int value. 0 is returned if the first character is not a number or no numbers are encountered. 

--- double atof(str) Stands for ASCII to float. Converts str to the equivalent double value. 0.0 is returned if the first character is not a number or no numbers are encountered. 

--- long int atol(str) Stands for ASCII to long int. Converts str to the equivalent long integer value. 0 is returned if the first character is not a number or no numbers are encountered. 
 
The following program demonstrates atoi. */
  char input[10];  
int num;  
 
printf("Enter a number: ");  
gets(input);  
num = atoi(input);  

  /* Note, that atoi() lacks error handling, and it is recommended to use strtol() if you want to make sure that proper error handling is done. */

  //------------------ ARRAY OF STRINGS -------------------
  /* A two-dimensional array can be used to store related strings. 
Consider the following statement which declares an array with 3 elements, each holding 15 characters:*/
  char trip[3][15] = {  
"suitcase",  
"passport",  
"ticket"  
}; 
  //Referring to trip[0] for "suitcase" is error-prone. Instead, you must think of the element at [0][0] as 's', the element at [2][3] as 'k', and so on. An easier, more intuitive way to deal with a collection of related strings is with an array of pointers, as in the following program: 
  char *trip[ ] = {  
"suitcase",  
"passport",  
"ticket"  
};  

printf("Please bring the following:\n");  
for (int i = 0; i < 3; i++) {  
printf("%s\n", trip[ i ]);
  
  return 0;
}