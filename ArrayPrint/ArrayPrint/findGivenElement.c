// find the given n element in the array
#include<stdio.h>
#include<conio.h>

void main()
{
	int a[5],i,n,j;
	int flag = 0;
	
	printf("Enter the 5 elements in the array");
	for(i = 0;i < 5; i++)
	{
		scanf("%d",&a[i]);
	}

	printf("Enter the number you want to search ");
	scanf("%d",&n);
	for(i = 0;i < 4;i++)
	{
		if(n == a[i])
			{
				flag = 1;
				printf("No found at %d index\n",i);
				break;
		}
	}

	if(flag == 0)
		printf("Number not found");
	getch();

}