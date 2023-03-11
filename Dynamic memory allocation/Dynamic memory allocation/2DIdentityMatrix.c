// identity of matrix

#include<stdio.h>
#include<stdlib.h>

void main()
{
	int** p = NULL, i, j,flag = 0;

	p = (int**)malloc(3 * sizeof(int*));

	for (i = 0; i < 3; i++)
	{
		*(p + i) = (int*)malloc(3 * sizeof(int));

	}
	printf("Enter the array elements \n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			scanf_s("%d", *(p + i) + j);

		}
	}

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%d\t", *(*(p + i) + j));

			if (i == j && *(*(p + i) + j) != 1)
			{
				flag = 1;
				break;
			}

			else if (i != j && *(*(p + i) + j) != 0)
			{
				flag = 1;
				break;
			}

		}
		printf("\n");
	}
	
	if (flag == 1)
	{
		printf("Not Identity matrix\n");
	}
	else
	{
		printf("Identity Matrix");
	}


}