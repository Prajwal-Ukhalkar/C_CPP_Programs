//5. write a c program to sort first half of array in ascending order and
//second half of array in descending order. (using dynamic memory
//	allocation
//
//
//#include<stdio.h>
//#include<stdlib.h>
//
//void main()
//{
//	
//	int* p = null,temp,rem; 
//	int i, j, n, first, second;;
//
//
//	printf("enter how many elements do you want to enter in the array : ");
//	scanf_s("%d",&n);
//	printf("enter the array elements :");
//
//	p = (int*)malloc(n * sizeof(int));
//
//	for (i = 0; i < n; i++)
//	{
//		scanf_s("%d", p + i);
//	}
//	
//	printf("\n");
//	printf("array elements before sorting are \n");
//	for (i = 0; i < n; i++)
//	{
//			printf("%d\t", *(p + i));
//	}
//
//	first = *p;  // assigns first element in array to temp;
//	for ( i = 1; i < n/2; i++)
//	{
//		if (first > *(p + i))
//			temp = *(p + i);
//			*(p + i) = first;
//			first = temp;
//	}
//	
//	for ( i = n / 2; i < n; i++)
//	{
//		for ( j = i + 1; j < n; j++)
//		{
//			if (*(p + i) < *(p + j))
//			{
//				temp = *(p + i);
//				*(p + i) = second;
//				second = temp;
//			}
//		}
//	}
//
//}