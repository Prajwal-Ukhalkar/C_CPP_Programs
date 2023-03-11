//10.Write C Program to read and print a Matrix, Rand C must be input by User.

#include<stdio.h>

void main()
{
	int a[100][100], r, c, i;
	int j;

	printf("Enter the numner of rows : ");
	scanf_s("%d",&r);

	printf("Enter the numner of cols : ");
	scanf_s("%d", &c);

	for ( i = 0; i < r; i++)
	{
		for ( j = 0; j < c; j++)
		{
			printf("Enter a[%d][%d] : ",i,j);
			scanf_s("%d",&a[i][j]);

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
	}
}