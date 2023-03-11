/*17.Write a C Program to Find 2 Elements in the Array 
such that Difference between them is Largest*/

#include<stdio.h>
#include<conio.h>

void main()
{
	int i,a[10],max,min;
	int ans = 0;
	printf("Enter the 10 array elements\n");

	for( i = 0; i < 10; i++)
	{
		scanf("%d",&a[i]);
	}

	max = min = a[0]; 
	for ( i = 1; i < 10; i++)
	{
		if (a[i] > max)
		{
			max = a[i];
		}
		if (a[i] < min)
		{
			min = a[i];
		}
	}

	 ans = max - min;

	printf("The largest difference between the numbers is %d ",ans);
	printf("and the numbers are %d and % d ",min,max);

	getch();
}