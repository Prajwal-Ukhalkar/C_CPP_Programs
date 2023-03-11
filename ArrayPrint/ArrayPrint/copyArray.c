/*Write a C program to copy the elements of one array 
into another array.*/

#include<stdio.h>
#include<conio.h>

void main()
{
	int a[10],b[10],j,i;
	printf("Enter the 5 elements of array \n");
	for ( i = 0; i < 5; i++)
	{
		scanf("%d",&a[i]);
	}

	// for copying one array to another array
	for ( i = 0; i < 5; i++)
	{
		b[i] = a[i];
	}

	printf("Second array elements are \n");
	for ( i = 0; i < 5; i++)
	{
		printf("%d\n",b[i]);
	}


   getch();
}
