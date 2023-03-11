//20. Write C program to find the count of even numbers in matrix



#include<stdio.h>

int main()
{
	int a[100][100], r, c, j, k, i, temp,count=0;
	printf("Enter the number of rows : ");
	scanf_s("%d", &r);

	printf("Enter the numner of cols : ");
	scanf_s("%d", &c);


	printf("Enter the array elements :\n");
	for (i = 0; i < r; i++)
	{
		for (j = 0; j < c; j++)
		{
			printf("Enter a[%d][%d] : ", i, j);
			scanf_s("%d", &a[i][j]);

		}

	}

	
	for (i = 0; i < r; i++)
	{
		for (j = 0; j < c; j++)
		{
			printf("%d\t",a[i][j]);
			if (a[i][j] % 2 == 0)
			{
				count++;
			}

		}
		printf("\n");
	}

	printf("\nCount of even NO is %d",count);

	return 0;
}