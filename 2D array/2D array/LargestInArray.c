//12. Write C Program to Find Largest Element in a Matrix.

#include<stdio.h>

void main()
{
	int a[100][100], r, c, i = 0;
	int j = 0, sum = 0,l;

	printf("Enter the numner of rows : ");
	scanf_s("%d", &r);

	printf("Enter the numner of cols : ");
	scanf_s("%d", &c);

	for (i = 0; i < r; i++)
	{
		for (j = 0; j < c; j++)
		{
			printf("Enter a[%d][%d] : ", i, j);
			scanf_s("%d", &a[i][j]);

		}
	}

	printf("Array elements are :\n");

	for (i = 0; i < r; i++)
	{
		for (j = 0; j < c; j++)
		{
			printf("%d\t", a[i][j]);

		}
		printf("\n");
		printf("\n");
	}

	l = a[0][0];

	for (i = 0; i < r; i++)
	{
		for (j = 1; j < c; j++)
		{
			if (l < a[i][j])
			{
				l = a[i][j];
			}

		}
		
	}

	printf("Largest element in array is : %d ", l);
}