/*15.Write a C program which accept sentence from user and 
print last word from that sentence.
Eg:
Input String: India is my country
Output String: country*/


#include<stdio.h>
#include<conio.h>

void main()
{
	char str[100],i = 0,j = 0,count=0;
	printf("Enter the string :");
	fgets(str, sizeof(str), stdin);

	while (str[i] != '\n')
	{
		while (str[i] == ' ')
		{
			i++;
		}
		
		while (str[i] != '\n' && str[i] != '\t')
		{
			i++;
		}
		
		j = str[i];	
		j--;
		while (j != ' ')
		{
			printf("%c",str[j]);
			j--;
		}
	}
	getch();
}
