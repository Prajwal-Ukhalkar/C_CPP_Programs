/*4.Write a C program to accept string and print it in the reverse order.
Eg:
Input String: India is my country
Output String: yrtnuoc ym si aidnI */

#include<stdio.h>
#include<conio.h>

void main()
{
	int i = 0,count = 0,count1;
	char str[100],temp[100];
	int ans,rem,rev;
	printf("Enter the string : \n");
	fgets(str, sizeof(str), stdin);

	while (str[i] != '\n')
	{
		while (str[i] == ' ')
		{
			i++;
		}

		while (str[i] != '\n')
		{
			count++;
			i++;
		}

		count1 = count-1;

		for ( i = 0; i < count; i++) // this for loop will copy the first string array to second in reverse order.
		{
			temp[i] = str[count1];
			count1--;
			printf("%c",temp[i]);
		}
		
	}

	
	getch();
}