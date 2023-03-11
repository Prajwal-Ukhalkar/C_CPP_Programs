					
#include<stdio.h>
#include<conio.h>

void main()
{
	int a[100],i,n,j;
	int sum = 0;

	printf("Enter the size of the array");
	scanf("%d",&n);

	printf("Enter the %d array elements",n);
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		sum = sum + a[i];
	}


		printf("Sum of the aarray elements %d ",sum);

	
	getch();
				
}