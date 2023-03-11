/*7.Write a C program to replace space with ‘$’ in given string.
Eg:
Input String: India is my country
Output String: India$is$my$coutry*/

#include<stdio.h>
#include<conio.h>

void main()
{
	char str[100],i = 0,j,count=0;
	printf("Enter the string :");
	fgets(str, sizeof(str), stdin);

	while (str[i] != '\n')
	{
		while (str[i] == ' ')
		{
			i++;
		}
		
		while (str[i] != ' ' && str[i] != '\n')
		{
			printf("%c",str[i]);
			if (str[i+1] == ' ')
			{
				printf("$");
			}
			i++;
		}
	}
	getch();
}