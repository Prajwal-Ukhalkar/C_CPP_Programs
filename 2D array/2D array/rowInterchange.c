//16. Write C program to interchange the rows in the matrix.(take row number as input to interchange exa.R1 with R3 or R2 with R3).


#include<stdio.h>

int main()
{
	int a[100][100], r, c, rcount = 1,ccount = 1,j,i = 0,r1,r2,temp,n1,n2;
	

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


		printf("Interchange R");
		scanf_s("%d",&r1);
		printf("With R");
		scanf_s("%d",&r2);
		
		for ( i = 0; i < r; i++)
		{
			n1 = r1 - 1;  //first row index is 0 [thus (first row then r1(1)-1=0) (second row(r2)2-1=1]
			n2 = r2 - 1;
			temp = a[n1][i];
			a[n1][i] = a[n2][i];
			a[n2][i] = temp;

		}

		printf("Before Interchanging the row,matrix elements are \n");
		for (i = 0; i < r; i++)
		{
			for (j = 0; j < c; j++)
			{
				printf("%d\t", a[i][j]);

			}
			printf("\n");
		}

		printf("After Interchanging the row,matrix elements are \n");
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