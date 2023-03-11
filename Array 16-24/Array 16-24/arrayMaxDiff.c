#include<stdio.h>
#include<conio.h>

int main() {
   char string[50];
   int i=0;
   printf("Enter the Sentenc: ");
   gets(string);
   while(string[i]!='\0') {
      printf("\nASCII Value of %c=%d", string[i], string[i]);
      i++;
   }
  
   return 0;
}