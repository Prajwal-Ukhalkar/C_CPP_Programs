/*15.Write a C program which accept sentence from user and
print last word from that sentence.
Eg:
Input String: India is my country
Output String: country
*/


#include<stdio.h>
#include<conio.h>

void main()
{
	char str[100], i = 0, j;
	int count = 0;
	printf("Enter the string :");
	fgets(str, sizeof(str), stdin);

	while (str[i] != '\n')
	{
		while (str[i] == ' ')
		{
			i++;
		}

		while (str[i] != '\n' && str[i] != '\t')
		{
			/*count++;
			if (str[i] == ' ')
			{
				count = 0;
			}*/
			i++;
		}
		j = str[i];
		
		while (j != ' ')
		{
			printf("%c", str[j]);
			j--;
		}
	}
}
