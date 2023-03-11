//11. Write C Program to Find Sum of all Elements of a Matrix.


#include<stdio.h>

void main()
{
	int a[100][100], r, c, i;
	int j,sum=0;

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
	}

	
	for (i = 0; i < r; i++)
	{
		for (j = 0; j < c; j++)
		{
			
			sum = sum + a[i][j];
		}
	}

	printf("Sumof all elements in array is %d : ",sum);

}