/*16. Write a C Program to Print the Alternate Elements 
in an Array*/

#include<stdio.h>
#include<conio.h>

void main()
{
	int a[10];
	int i,j,n;

	printf("10 Elements enter kt de bhai...\n");
		for ( i = 0; i < 10; i++)
		{
			scanf("%d",&a[i]);
		}

		printf("Alternate elements ...\n");
		for ( i = 0; i < 10; i=i+2)
		{
			printf("%d ",a[i]);
		}

		getch();
}