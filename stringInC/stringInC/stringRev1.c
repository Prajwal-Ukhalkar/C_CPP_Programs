/*6.Write a C program to reverse a given string as below.
Input String: India is my country
Output String: aidnI si ym yrtnuoc */

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
			i++;
			count++;
		}

		j = i - 1;

		while(j >= 0 && str[j] != ' ')
		{
			printf("%c",str[j]);
			if (str[j-1] == ' ')
			{
				printf(" ");
			}
			j--;
		}

	}
	getch();
}