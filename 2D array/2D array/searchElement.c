//9.Write a C Program to Search Element in a 2D Array(Using Static Memory Allocation).

#include<stdio.h>

void main()
{
	int a[10][10], i,j,r,c,n,flag = 0;
	printf("Enter the number of rows \n");
	scanf_s("%d",&r);
	printf("Enter the number of columns \n");
	scanf_s("%d", &c);

	for ( i = 0; i < r; i++)
	{
		for ( j = 0; j < c; j++)
		{
			printf("Enter the element a[%d][%d] :", i + 1, j + 1);
			scanf_s("%d",&a[i][j]);
		}
	}


	printf("Enter the numnber to be searched : ");
	scanf_s("%d",&n);

	for (i = 0; i < r; i++)
	{
		for (j = 0; j < c; j++)
		{
			if (n == a[i][j])
			{
				flag = 1;
				break;
			}
			else
				flag = 0;
		}
	}

	if (flag == 1)
	{
		printf("Element found\n");
	}
	if (flag == 0)
	{
		printf("Elements not found");
	}

}