/*Write a C program that return the positions of the 
pallindrome element in array.*/

					
#include<stdio.h>
#include<conio.h>

void main()
{
	int a[5],i,n,j,rem;
	int ans = 0;
	int temp;


	printf("Enter the 10 array elements\n");
	
	for(i=0;i<5;i++)
	{
        scanf("%d",&a[i]);
		temp = a[i];
		while (a[i] > 0)
		{
			rem = a[i] % 10;
			ans = ans * 10 + rem;  // to reverse the number
			a[i] = a[i] / 10;      // this will make the number less by one digit place
		}
	}

	printf("%d",ans);

	

	getch();
				
}