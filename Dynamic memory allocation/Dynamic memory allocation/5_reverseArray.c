// 5.Reverse array using DMA

#include<stdio.h>
#include<stdlib.h>

void main()
{
	int i, * p, j, n, high, secondh;

	printf("Enter how many numbers you want to enter i the array : ");
	scanf_s("%d", &n);

	p = (int*)malloc(n * sizeof(int));

	printf("Enter the elements :\n");
	for (i = 0; i < n; i++)
	{
		scanf_s("%d", p + i);

	}

	printf("Elements are :\n");
	for (i = 0; i < n; i++)
	{
		printf("%d\n", *(p + i));

	}

	printf("Reverse Elements are :\n");
	for (i = n; i > 0; i--)
	{
		printf("%d\n", *(p + i));

	}



}