#include <stdio.h>

int main()
{
    int n,i,j;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    printf("Enter the array elements :");
    int a[10];                    //Array Declaration
    for(int i=0;i<9;i++)
    {
        scanf("%d",&a[i]);
    }
    for( i=0;i<9;i++)         //Sorting Array
    {
        int temp;
        for( j=i+1; j<n ;j++)
        {
            if(a[i]<a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }

    printf("The second largest element is %d",a[1]);      //Accessing the largest element
    return 0;
}