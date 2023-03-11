/*10.Write a C program to print all fibonacci series upto each 
ASCII code of aphabates in given string.*/

#include<stdio.h>
#include<conio.h>

void main()
{
	char str[10];
	int i = 0,n1 = 0,n2 = 1,last;
	int next = 0;

	printf("Enter the string : ");
	fgets(str,sizeof(str),stdin);

	while (str[i] != '\n')
	{
		while (str[i] == ' ')
		{
			i++;
		}
		while (str[i] != ' ' && str[i] != '\n')
		{
			printf("%d %d",n1,n2);
			while (i != (int)str[i])
			{
				printf("%d",next);
				n1 = n2;
				n2 = next;
				next = n1 + n2;
				i++;
			}
			printf("%d",str[i]);
			i++;
		}

		getch();
	}
}