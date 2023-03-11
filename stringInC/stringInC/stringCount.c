//3.Write a C program to print count of number characters in given string.

#include<stdio.h>
#include<conio.h>

void main()
{
	int i = 0,count = 0;
	char str[100];
	printf("Enter the string : \n");
	fgets(str, sizeof(str), stdin);

	while (str[i] != '\n')
	{
		while (str[i] == ' ')
		{
			i++;
		}
		while (str[i] != ' ' && str[i] != '\n')
		{
			count++;
			i++;
		}

	}
	printf("Count is : %d ",count);
	getch();
}