/*8.Write a program in C to count the frequency of each 
element of an array.*/


#include<stdio.h>
#include<conio.h>

void main()
{
	int a[10],b[10],n,j,i;
	int count = 0;
	printf("Enter the size of the array\n");
	scanf("%d",&n);
	printf("Enter the array elememts \n");
	for ( i = 0; i < n; i++)
	{
		scanf("%d",&a[i]);
	}

	
	for ( i = 0; i < n; i++)
	{
		count = 1;
		if (a[i] != -1)
		{
			for ( j = i + 1; j < n; j++)
			{
				if(a[i] == a[j])
				{
					count++;
					a[j] = -1;
				}
			}
			b[i] = count;
		}
	}

	for ( i = 0; i < n; i++)
	{
		if (a[i] != -1)
		{
			printf("%d is present %d times \n",a[i],b[i]);
		}
	}


   getch();
}
