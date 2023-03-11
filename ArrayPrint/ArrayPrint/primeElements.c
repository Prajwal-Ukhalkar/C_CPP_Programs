#include<stdio.h>
#include<conio.h>

void main()
{
	
	int a[10],i,n,j,count = 0;

	printf("Enter the 10 array elements \n");
	for(i = 0; i < 10; i++)
	{
		scanf("%d",&a[i]);
	}

	printf("Prime numbers in the array are \n");
	for(i = 0; i < 10; i++) // to throw the elemnts in inner loop
	{
		count =0;
		for(j = 1; j <= a[i]; j++)  //to check number is prime or not
		{
			if(a[i] % j == 0)
			{
				count++;
			}
			
		}

		if(count == 2)
			{
				printf("%d\n",a[i]);
			}
		
	}
	getch();
}