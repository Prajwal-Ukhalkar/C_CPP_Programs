#include<stdio.h>
#include<stdlib.h>

void main()
{
	int* p = NULL;
	int flag = 0,item,i,n;
	

	
	printf("Enter the number of  elements : ");
	scanf_s("%d", &n);
	
	p = (int*)malloc(n * sizeof(int));

	printf("Enter the elements : \n");
	for ( i = 0; i < n; i++)
	{
		scanf_s("%d", p + i);
	}

	printf("Elements are : \n");
	for (i = 0; i < n; i++)
	{
		printf("%d\n", *(p + i));
	}

	printf("Enter the element you want to search :");
	scanf_s("%d", &item);

	for ( i = 0; i < n; i++)
	{
		if (item == *(p + i))
		{
			flag = 1;
			break;
		}
	}
	if (flag == 1)
	{
		printf("Element found\n");
	}
	else
	{
		printf("Element not found\n");
	}
}
