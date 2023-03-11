/*11.Write a C program which accepts a string from user which 
contains a characters from ‘b’ to ‘y’.
Eg:
Input String: mn jn kn kazfd
Output String: mn jn kn k.*/

#include<stdio.h>
#include<conio.h>

void main()
{
	char str[100];
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
		while (str[i] != ' ' && str[i] != '\n' && str[i] != '\t')
		{
			
			if (str[i] == 'A' || str[i] == 'a' || str[i] == 'Z' || str[i] == 'z')
			{
				i++;
				continue;
			}
		
			printf("%c",str[i]);
			i++;
		}

		getch();
	}
}