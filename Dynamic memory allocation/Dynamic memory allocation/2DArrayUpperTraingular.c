#include<stdio.h>
#include<stdlib.h>

void main()
{
	int** p = NULL, i, j, flag = 0;

	p = (int**)malloc(3 * sizeof(int*));
	//int** beacause main array che addr ubhya array madhe yetil ani ubhya array che addre again P madhe yetil.
	//thus need 2 time type casting.

	for (i = 0; i < 3; i++)
	{
		*(p + i) = (int*)malloc(3 * sizeof(int));
	}

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
			if (i > j)  //when i>j there should be 0
			{
				if (*(*(p + i) + j) == 0)
				{
					flag = 1;
				}
			}
		}
		printf("\n");
	}
	if (flag == 1)
	{
		printf("Upper traingular matrix");
	}
	else
	{
		printf("Not Upper traingular matrix");
	}

}