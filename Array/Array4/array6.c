// find maximum and minimum element in the array

#include<stdio.h>
#include<conio.h>

void main()
{
	int a[10],i,n,j;
	int temp1,temp2,temp;
	
	
	printf("Enter the 10 elements in the array\n");
	for(i = 0;i < 9; i++)
	{
		scanf("%d",&a[i]);
	}

	for(i = 0;i < 9;i++)
	{
		temp1 = i;
		for(j = i + 1; j < 9; j++)
		{
			temp2 = j;
			if(a[i] % 2 == 0 && a[j] % 2 == 0)
			{
				if(temp2 < temp1)
				{
					temp = temp1;
					temp1 = temp2;
					temp2 = temp;
				}
			}
			
		}
	}

		
	printf("Sorted array is......");


	for(i = 0;i < 9; i++)
	{
		printf("%d ",a[i]);
	}


	getch();

}