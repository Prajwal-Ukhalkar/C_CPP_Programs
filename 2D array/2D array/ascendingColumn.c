//18. Write C program to arrange column elements in ascending order.



#include<stdio.h>

int main()
{
	int a[100][100], r, c, j, k, i, temp;
	printf("Enter the number of rows : ");
	scanf_s("%d", &r);

	printf("Enter the numner of cols : ");
	scanf_s("%d", &c);


	printf("Enter the first array elements :\n");
	for (i = 0; i < r; i++)
	{
		for (j = 0; j < c; j++)
		{
			printf("Enter a[%d][%d] : ", i, j);
			scanf_s("%d", &a[i][j]);

		}

	}


	printf("Before altering ,the matrix elements are \n");
	for (i = 0; i < r; i++)
	{
		for (j = 0; j < c; j++)
		{
			printf("%d\t", a[i][j]);

		}
		printf("\n");
	}


	for (i = 0; i < r; i++)  //for rows
	{
		for (j = 0; j < c; j++)  //for columns
		{

			for (k = i + 1; k < r; k++)  //for sorting
			{
				if (a[i][j] > a[k][j])
				{
					temp = a[i][j];
					a[i][j] = a[k][j];
					a[k][j] = temp;
				}
			}


		}

	}

	printf("After altering, the matrix elements are \n");
	for (i = 0; i < r; i++)
	{
		for (j = 0; j < c; j++)
		{
			printf("%d\t", a[i][j]);

		}
		printf("\n");
	}





	return 0;
}