// ascending order

#include<stdio.h>
#include<stdlib.h>

void main()
{
	int* p = NULL;
	int first, item, i,j, n,temp;



	printf("Enter the number of  elements : ");
	scanf_s("%d", &n);

	p = (int*)malloc(n * sizeof(int));

	printf("Enter the elements : \n");
	for (i = 0; i < n; i++)
	{
		scanf_s("%d", p + i);
	}

	printf("Elements are : \n");
	for (i = 0; i < n; i++)
	{
		printf("%d\n", *(p + i));
	}

	first = *p;


	for ( i = 0; i < n; i++)
	{
		for ( j = i+1; j < n; j++)
		{
			if (*(p + i) > *(p + j))
			{
				temp = *(p + i);
				*(p + i) = *(p + j);
				*(p + j) = temp;
			}
		}
	}

	printf("Elements in ascending order are : \n");

	for ( i = 0; i < n; i++)
	{
		printf("%d\n", *(p + i));
	}


}
