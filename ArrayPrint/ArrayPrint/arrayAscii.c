/*Write a C Program to Input a String & Store their 
Ascii Values in an Integer Array*/

#include<stdio.h>
#include<conio.h>

void main()
{
	int a[100],i;
	char s[100];
	int n;
	int count = 0;

	printf("Enter the numbers present in the array \n");
	scanf("%d",&n);

	printf("Enter the string of %d characters ",n);
	scanf("%s",&s);

	for ( i = 0; i < n; i++) //storing the values in the integer array.
	{
		a[i]= s[i];
	}


	while(count < n)
	{
		printf("%c - %d\n",a[count],a[count]);
		count++;
	}
	getch();

}