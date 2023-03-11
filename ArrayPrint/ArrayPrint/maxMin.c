// find maximum and minimum element in the array

#include<stdio.h>
#include<conio.h>

void main()
{
	int a[5],i,n,j;
	int max,min;
	max = a[0];
	//min = a[0];
	
	
	printf("Enter the 5 elements inte array");
	for(i = 0;i < 5; i++)
	{
		scanf("%d",&a[i]);
	}

	for(i = 0;i < 5; i++)
	{
		if(max < a[i])
		{
			max = a[i];
		}
	}
	printf("Maximum is %d\n",max);

	min = a[0];
	for(i = 0;i < 5; i++)
	{
		if(min > a[i])
		{
			min = a[i];
		}
	}
	printf("Minimum is %d",min);

	getch();

}