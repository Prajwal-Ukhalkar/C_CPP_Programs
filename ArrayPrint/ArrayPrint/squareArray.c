/*Write a C program to store squares of the elements 
in the same array*/

#include<stdio.h>
#include<conio.h>

void main()
{
	int a[100],i;
	int n;
	int ans = 0;
	int count = 0;

	printf("Enter the numbers present in the array \n");
	scanf("%d",&n);
	printf("Enter the elements in the array \n");
	for ( i = 0; i < n; i++) //storing the values in the integer array.
	{
		scanf("%d",&a[i]);
	}

	for ( i = 0; i < n; i++)
	{
		ans = a[i] * a[i];
		printf("Square is %d\n",ans);
	}





	getch();

}