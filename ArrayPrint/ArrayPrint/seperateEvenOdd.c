/*7.Write a program in C to separate odd and even 
integers in same array.*/
#include<stdio.h>
#include<conio.h>

void main()
{
	int a[100],i,n;
	printf("Enter the size of the array");
	scanf("%d",&n);

	printf("Enter the elements of the array\n");
	for ( i = 0; i < n; i++)
	{
		scanf("%d",&a[i]);
	}

	printf("Even elements from the array are\n");
	for ( i = 0; i < n; i++)
	{
		if (a[i] % 2 == 0)
		{
			printf("% d\n",a[i]);
		}
	}

	printf("Odd elements from the array are\n ");
	for ( i = 0; i < n; i++)
	{
		if (a[i] % 2 != 0)
		{
			printf("%d ",a[i]);
		}
	}

   getch();
}
