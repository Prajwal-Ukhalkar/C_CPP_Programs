//13. Write C Program to Print Sum of Each Row and Column of given Matrix.(if matrix 3x3, o / p = > r1 = _, r2 = _, r3 = _, c1 = _, c2 = _, c3 = _)

#include<stdio.h>

int main()
{
	int a[100][100], r, c, i = 0;
	int j, k, rcount = 1,ccount = 1, sum = 0;

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

	//for rows

		
		printf("Sum of each row\n");

		for (j = 0; j < r; j++)      //rows
		{
			sum = 0;
			for (k = 0; k < c; k++)  //cols
			{
				sum = sum + a[j][k];   //a00  a01   02
			}// in last iteration,k = 3 and input rows is also 3, so when k==r means 1 row is complete and print the result


			if (k == r)     
			{
				
				printf("R%d = %d ", rcount, sum);
				printf("\n");
				rcount++;
			}
			
		}



		//for columns

		printf("Sum of each column\n");

		for (k = 0; k < r; k++)      //rows
		{
			sum = 0;
			for (j = 0; j < c; j++)  //cols
			{
				sum = sum + a[j][k];   //a00  a01   02
			}// in last iteration,k = 3 and input rows is also 3, so when k==r means 1 row is complete and print the result


			if (j == c)
			{
				printf("R%d = %d ", ccount, sum);
				printf("\n");
				ccount++;
			}

		}

	return 0;
}