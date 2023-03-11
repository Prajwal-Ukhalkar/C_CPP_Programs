//17. Write C program to interchange the column in the matrix.(take row number as input to interchange exa.R1 with R3 or R2 with R3).


#include<stdio.h>

int main()
{
	int a[100][100], r, c, j, i = 0, c1, c2, temp;


	printf("Enter the number of rows : ");
	scanf_s("%d", &r);

	printf("Enter the numner of cols : ");
	scanf_s("%d", &c);

	if (r == c)
	{

		printf("Enter the first array elements :\n");
		for (i = 0; i < r; i++)
		{
			for (j = 0; j < c; j++)
			{
				printf("Enter a[%d][%d] : ", i, j);
				scanf_s("%d", &a[i][j]);

			}

		}


		printf("Interchange C");
		scanf_s("%d", &c1);
		printf("With C");
		scanf_s("%d", &c2);

		for (i = 0; i < c; i++)
		{
		  //first row index is 0 [thus (first row then r1(1)-1=0) (second row(r2)2-1=1]
			
			temp = a[i][c1-1];
			a[i][c1-1] = a[i][c2-1];
			a[i][c2-1] = temp;

		}

		printf("Before Interchanging the column,matrix elements are \n");
		for (i = 0; i < r; i++)
		{
			for (j = 0; j < c; j++)
			{
				printf("%d\t", a[i][j]);

			}
			printf("\n");
		}

		printf("After Interchanging the column,matrix elements are \n");
		for (i = 0; i < r; i++)
		{
			for (j = 0; j < c; j++)
			{
				printf("%d\t", a[i][j]);

			}
			printf("\n");
		}


	}

	else {
		printf("Matrix should be square matrix (R = C)");
	}



	return 0;
}