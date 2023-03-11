					
#include<stdio.h>
#include<conio.h>
int main()
{
	int a[100],b[100],n,i,j,temp;
	int k = 0;
	int count = 0;
	printf("Enter size of array:");
	scanf("%d",&n);

	printf("Enter %d Elements:",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}

	for(i=0;i<n;i++)
	{
		if(a[i] % 2 == 0)
		{
			b[k] = a[i];
			k++;
			count++;
		}
	}

	// sorting logic is remaining



	k = 0;
	for(i = 0; i < n; i++)
	{
		
		if(a[i] % 2 == 0)
		{
			a[i] = b[k];
			k++;
		}
	}

	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}

	
	getch();
				
}