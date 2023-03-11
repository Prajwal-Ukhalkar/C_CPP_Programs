/*8.Write a program which accept sentence from user and print 
number of words from that sentence.
Input String: India_is_my_country
Output: 4
Input String:
______India______is____my____country____ 
(Consider _ as space)
Output: 4*/

#include<stdio.h>
#include<conio.h>

void main()
{ 
	int i = 0,count = 0;
	char str[100];

	printf("Enter the string :");
	fgets(str, sizeof(str), stdin);

	while (str[i] != '\n')
	{
		while (str[i] == ' ')
		{
			i++;
		}
		
		while (str[i] != ' ' &&  str[i] != '\n')
		{
			if (str[i+1] == ' ')
			{
				printf(" ");
			}

			if (str[i+1] == ' ' || str[i+1] == '\n' || str[i+1] == '\t')
			{
				count++;
			}
			i++;
		}
		
	}
	printf("The count of word is : %d",count);
	getch();
}