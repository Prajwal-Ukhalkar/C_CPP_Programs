/*13.Write a C program which accept sentence from user and 
print number of white spaces from that
sentence.
Eg:
Input String: India is my country
Output: 3*/


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
		
		while (str[i] != '\n')
		{
			if (str[i] == 32)
			{
				count++;
			}
			i++;
		}
		printf("%d",count);
	}
	getch();
}
