#include <stdio.h>
#include <string.h>
/*
strlen() - get length of a string 
strcat() - merge two strings 
strcpy() - copy one string to another 
strlwr() - convert string to lower case 
strupr() - convert string to upper case 
strrev() - reverse string 
strcmp() - compare two strings 
*/

int main(void) {
/* A string in C is an array of characters that ends with a NULL character '\0'. 
A string declaration can be made in several ways, each with its own considerations. */
  char str1[6] = "hello";  
char str2[ ] = "world";

  char str3[6] = {'h', 'e', 'l', 'l', 'o', '\0'};  
char str4[ ] = {'h', 'e', 'l', 'l', 'o', '\0'}; /* size 6 */ 

  /* As with any array, the name of a string acts as a pointer. 
A string literal is a text enclosed in double quotation marks. 
A character, such as 'b', is indicated by single quotation marks and cannot be treated as a string. 
 
A string pointer declaration such as char *str = "stuff"; is considered a constant and cannot be changed from its initial value. 
*/

  //----------------------------------------------------
char full_name[50];  
printf("Enter your full name: ");  
gets(full_name); 

/*  A safer alternative to gets() is fgets(), which reads up to a specified number of characters. This approach helps prevent a buffer overflow, which happens when the string array isn't big enough for the typed text. 
For example: */

char full_name[50];  
printf("Enter your full name: ");  
fgets(full_name, 50, stdin); 

  /*
    stdin means to read from the standard input, which is the keyboard. 
Another difference between gets and fgets is that the newline character is stored by fgets. 

fgets() reads only n-1 characters from stdin because there must be room for '\0'. */

  //----------------------------------------------------

  /* String output is handled with the fputs(), puts(), and printf() functions. 
The fputs() requires the name of the string and a pointer to where you want to print the string. To print to the screen, use stdout which refers to the standard output. */

  char city[40];  
printf("Enter your favorite city: ");  
gets(city);  
// Note: for safety, use  
// fgets(city, 40, stdin);  
 
fputs(city, stdout);  
printf(" is a fun city.");  

  /* The puts() function takes only a string argument and can also be used to display output. However, it adds a newline to output. */

  char city[40];  
printf("Enter your favorite city: ");  
gets(city);  
// Note: for safety, use  
// fgets(city, 40, stdin);  
 
puts(city);  


  
  
  return 0;
}