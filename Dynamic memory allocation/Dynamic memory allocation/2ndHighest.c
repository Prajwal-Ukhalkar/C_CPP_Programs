// 4.second highest element

#include<stdio.h>
#include<stdlib.h>

void main()
{
	int i, * p, j,n,high,secondh;

	printf("Enter how many numbers you want to enter i the array : ");
	scanf_s("%d", &n);

	p = (int*)malloc(n * sizeof(int));

	printf("Enter the elements :\n");
	for ( i = 0; i < n; i++)
	{
		scanf_s("%d", p + i);

	}

	printf("Elements are :\n");
	for (i = 0; i < n; i++)
	{
		printf("%d\n", *(p + i));

	}

	high = *p + 0;
	for ( i = 1; i < n; i++)
	{
		if (high < *(p + i))
		{
			high = *(p + i);
		}
	}
	secondh = *p + 0;
	printf("Highest element is %d",high);

	for (i = 1; i < n; i++)
	{
		if (secondh != high && secondh < *(p + i))
		{
			secondh = *(p + i);
		}
	}

	printf("\nsecond highest element is %d", high);
}