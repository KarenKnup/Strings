#include <stdio.h>
#include <string.h>

void InverteMaiueMinu (char s[]){
int i,s1[20], s2[20];
  
for(i=0;s[i]!='\0';i++){
s1[i]=toupper(s[i]);
s2[i]=tolower(s[i]);

  if (s[i]>='A' && s[i]<='Z'){//Minu
    s[i]=s2[i];
    }
  else {//Maiu
    s[i]=s1[i];
    }
  }
}

void TudoMaiu (char s[]){
int i,s1[20], s2[20];
  
for(i=0;s[i]!='\0';i++){
s1[i]=toupper(s[i]);

  if (s[i]>='a' && s[i]<='z'){
    s[i]=s1[i];    
    }
  }
}

void TudoMinu (char s[]){
int i,s1[20], s2[20];
  
for(i=0;s[i]!='\0';i++){
s1[i]=tolower(s[i]);

  if (s[i]>='A' && s[i]<='Z'){
    s[i]=s1[i];    
    }
  }
}

int main(void) {
char s[20]="Hello";

  InverteMaiueMinu(s);
  printf("\n %s",s);
  
  TudoMaiu(s);
  printf("\n\n %s",s);

  TudoMinu(s);
  printf("\n\n %s",s);
  
    return 0;
}