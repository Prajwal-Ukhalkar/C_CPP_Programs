/*9.Write a C program to replace Good names in mail.
Eg:
Raw String: Hello GoodName
Input String: India
Output String: Hello India
Input String: Sangamner
Output String: Hello Sangamner
*/

#include<stdio.h>
#include<conio.h>

void main()
{ 
	int i = 0,j = 0;
	char str1[100],str2[100];

	printf("Raw string : ");
	fgets(str1, sizeof(str1), stdin);

	printf("Enter the input string :");
	fgets(str2, sizeof(str2), stdin);

	while (str1[i] != '\n')
	{
		while (str1[i] == ' ') //if space before the dtring then skip it.
		{
			i++;
		}
		
		while (str1[i] != ' ' &&  str1[i] != '\n')  //  until string is not equal to space and \n (means until characters are present in the string)
		{
			if (str1[i+1] == ' ')  // if space found on the next character of string.
			{
				while (str1[j] != ' ') // traverse the string until space is found with variable other than i (j)
				{
					printf("%c",str1[j]);
					if (str1[j +1] == ' ')
					{
						printf(" ");
					}
					j++;
				}
				printf("%s",str2);
			}
			i++;
		}		
		
	}

	getch();
}