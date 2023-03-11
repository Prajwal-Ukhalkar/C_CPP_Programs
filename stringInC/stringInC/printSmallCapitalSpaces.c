/*12.Write a C program which accept sentence from user and 
print number of small letters, capital
letters, Spaces and digits from that sentence.
Eg:
Input String: abcDE 5Glm1 O
Output String: Small: 5 Capital: 4 Digits: 2 Spaces: 2*/

#include<stdio.h>
#include<conio.h>

void main()
{
	char str[100];
	int i = 0,small = 0,capital = 0,digits = 0,spaces = 0;

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
			if (str[i] >= 97 && str[i] <= 122)
			{
				small++;
			}
			else if (str[i] >= 65 && str[i] <= 90)
			{
				capital++;
			}
			else if (str[i] >= 48 && str[i] <= 57)
			{
				digits++;
			}
			else if(str[i] == 32)
			{
				spaces++;
			}
			i++;
		}
			printf("small = %d\n", small);
			printf("capital = %d\n", capital);
			printf("space = %d\n", spaces);
			printf("number = %d\n", digits);
			
		getch();
	}
}