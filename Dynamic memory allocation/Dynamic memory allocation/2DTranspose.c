// Transpose of matrix

#include<stdio.h>
#include<stdlib.h>

void main()
{
	int** p = NULL, i, j;

	p = (int**)malloc(3 * sizeof(int*));

	for ( i = 0; i < 3; i++)
	{
		*(p + i) = (int*)malloc(3 * sizeof(int));

	}
	printf("Enter the array elements \n");
	for ( i = 0; i < 3; i++)
	{
		for ( j = 0; j < 3; j++)
		{
			scanf_s("%d",*(p+i)+j);

		}
	}

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%d\t", *(*(p + i) + j));

		}
		printf("\n");
	}
	//just reverse the values if and and j.
	printf("Transpose matrix is\n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%d\t", *(*(p + j) + i));
			

		}
		printf("\n");
	}

	
}