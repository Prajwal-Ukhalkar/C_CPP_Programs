//15. Write C program to check two matrices are identical or not.


#include<stdio.h>

int main()
{
	int a[100][100],b[100][100], r, c, i = 0;
	int j, k, sum = 0;

	printf("Enter the number of rows : ");
	scanf_s("%d", &r);

	printf("Enter the numner of cols : ");
	scanf_s("%d", &c);

	if (r == c)
	{

		printf("Enter the first array elements :");
		for (i = 0; i < r; i++)
		{
			for (j = 0; j < c; j++)
			{
				printf("Enter a[%d][%d] : ", i, j);
				scanf_s("%d", &a[i][j]);

			}
		}

		printf("Enter the second array elements :");
		for (i = 0; i < r; i++)
		{
			for (j = 0; j < c; j++)
			{
				printf("Enter b[%d][%d] : ", i, j);
				scanf_s("%d", &b[i][j]);

			}
		}

		if (a[i][j] == b[i][j])
		{
			printf("Given two matrices are idential matrices \n");
		}

		else {
			printf("Matrices are not square matrices \n");
		}



	}

	else {
		printf("Matrix should be square matrix (R = C)");
	}



	return 0;
}