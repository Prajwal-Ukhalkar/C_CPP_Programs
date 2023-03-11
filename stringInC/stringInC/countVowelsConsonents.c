/*5.Write a C program to count count of number of vowels and 
number of consonants in the given string. */

#include<stdio.h>
#include<conio.h>

void main()
{
	int i = 0,vowelC = 0,consonentC = 0;
	char str[100],temp[100];
	
	printf("Enter the string : \n");
	fgets(str, sizeof(str), stdin);

	while (str[i] != '\n')
	{
		if (str[i] == 'a' || str[i] == 'A' || str[i] == 'e' || str[i] == 'E' || str[i] == 'I'|| 
			str[i] == 'i' || str[i] == 'o'|| str[i] == 'O' || str[i] == 'u' || str[i] == 'U')
		{
			vowelC++;
		}
		else
		{
			consonentC++;
		}
		i++;
	}
	printf("Vowels : %d\n",vowelC);
	printf("Consonents : %d",consonentC);
	getch();
}