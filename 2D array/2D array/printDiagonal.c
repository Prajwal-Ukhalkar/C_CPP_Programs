//14. Write C Program to Read a Matrix and Print Diagonals.

#include<stdio.h>

int main()
{
	int a[100][100], r, c, i = 0;
	int j, k, sum = 0;

	printf("Enter the number of rows : ");
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

	//printing diagonal elements

	printf("Diagonal elements are :\n");

	for (i = 0; i < r; i++)
	{
		for (j = 0; j < c; j++)
		{
			if (i == j)
			{
				printf("%d\t", a[i][j]);
			}

		}
		printf("\n");

	}


	return 0;
}