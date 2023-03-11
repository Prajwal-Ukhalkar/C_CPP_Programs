// addition of matrix

#include<stdio.h>
#include<stdlib.h>

void main()
{
	int** p = NULL ,**q = NULL,**add = NULL, i, j, flag = 0;

	p = (int**)malloc(3 * sizeof(int*));
	q = (int**)malloc(3 * sizeof(int*));
	add = (int**)malloc(3 * sizeof(int*));

	for (i = 0; i < 3; i++)
	{
		*(p + i) = (int*)malloc(3 * sizeof(int));
		*(q + i) = (int*)malloc(3 * sizeof(int));
		*(add + i) = (int*)malloc(3 * sizeof(int));


	}
	printf("Enter the first array elements \n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			scanf_s("%d", *(p + i) + j);

		}
	}


	printf("First array elemrnts are\n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%d\t", *(*(p + i) + j));

			

		}
		printf("\n");
	}

	printf("Enter the second array elements \n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			scanf_s("%d", *(q + i) + j);

		}
	}

	printf("Second array elements are\n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%d\t", *(*(q + i) + j));

		}
		printf("\n");
	}


	printf("The sum of two matrices \n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			*(*(add + i) + j) = *(*(p + i) + j) + *(*(q + i) + j);
			printf("%d\t", *(*(add + i) + j));

		}
		printf("\n");
	}

}