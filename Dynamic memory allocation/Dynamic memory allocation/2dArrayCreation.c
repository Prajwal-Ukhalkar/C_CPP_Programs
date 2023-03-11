#include<stdio.h>
#include<stdlib.h>

void main()
{
	//double** beacuse p has to go jump 2 steps(1.from P to verticle array containing base address of actual array)
												//(2.from verticle array values to actual array address )
	int** p = NULL; //for storing address of verticle array
	int i,j;

	p = (int**)malloc(3 * sizeof(int*));  //for creating verticle array which will store base address of actual array

	printf("Enter the array elements :");

	for ( i = 0; i < 3; i++)
	{
		*(p + i) = (int*)malloc(3 * sizeof(int)); //for creating actual array of 9 elements
	}												   // 3 single 1d array containing 3 elements will create

	for ( i = 0; i < 3; i++)
	{
		for ( j = 0; j < 3; j++)
		{
			scanf_s("%d",*(p + i) + j);
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


	
}