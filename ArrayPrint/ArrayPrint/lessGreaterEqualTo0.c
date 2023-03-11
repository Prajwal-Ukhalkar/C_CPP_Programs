/*An array consist of Integers. Write a C program to 
count the number of elements less than, greater than 
and equal to zero.*/					
#include<stdio.h>
#include<conio.h>

void main()
{
	int a[10],i,n,j;
	int sum = 0;
	int count0 = 0,count1 = 0;
	int count2 = 0;


	printf("Enter the 10 array elements\n");
	
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
		if(a[i] == 0)
		{
			count0++;
		}
		else if (a[i] < 0)
		{
			count1++;
		}
		else
		{
			count2++;
		}

	}

	printf("Numbers less than 0 are %d\n",count1);
	printf("Numbers greater than 0 are %d\n",count2);
	printf("Numbers equal to 0 are %d\n",count0);

	getch();
				
}