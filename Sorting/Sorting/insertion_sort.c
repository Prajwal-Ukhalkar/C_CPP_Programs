/*#include<stdio.h>

insertion_sort(int arr[],int n)
{
	for (int i = 1; i < n; i++)
	{
		int empty = i;
		int temp = arr[i];

		while (empty > 0 && arr[empty-1] > temp)
		{
			arr[empty] = arr[empty - 1];
			empty--;
		}
		arr[empty] = temp;
	}
}

void main()
{
	int arr[100], n;

	printf("Enter how many numbers you want to Enter :");
	scanf_s("%d", &n);

	for (int i = 0; i < n; i++)
	{
		scanf_s("%d[i]", &arr[i]);
	}

	printf("Unsorted Array \n");
	printf("[");
	for (int i = 0; i < n; i++)
	{
		printf("%d\t", arr[i]);
	}
	printf("]");
	printf("\n");

	insertion_sort(arr, n);//array cha base ani tyat kiti element ahe he pathavle

	printf("sorted Array by insertion sort \n");
	printf("[");
	for (int i = 0; i < n; i++)
	{
		printf("%d\t", arr[i]);
	}
	printf("]");
	printf("\n");


}*/