#include<stdio.h>
#include<conio.h>

void main()
{
	int a[5],i;

	printf("Enter the 5 array elements \n");
	for( i = 0;i < 4;i++)
	{
		scanf("%d",&a[i]);
	}

	printf("Array elements are \n");
	for( i = 0;i < 4;i++)
	{
		printf("%d",a[i]);
	}

	printf("Array elements in reverse order are \n");
	for( i = 4;i < 0;i--)
	{
		printf("%d",a[i]);
	}




	getch();
}