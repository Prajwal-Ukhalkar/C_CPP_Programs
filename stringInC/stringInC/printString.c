//2.Write a C program to accept string with multiple spaces from user and print it with a sinlge space as

#include<stdio.h>
#include<conio.h>

void main()
{
	int i = 0;
	char str[100];
	printf("Enter the string \n");
	fgets(str, sizeof(str),stdin);  //fget is function take enter as input thus '\n' is now the part of the string

	while (str[i] != '\0')
	{
		while (str[i] == ' ')
		{
			i++;
		}
		
		while (str[i] != ' ' && str[i] != '\0') //this second condition after && is for checking : the loop variable should not cross the \n and \0
		{
			printf("%c",str[i]);

			if (str[i+1] == ' ') //if space found after next index of the word,then deliberately print space
			{
				printf(" ");
			}
			i++;
		}

	}

	getch();
}