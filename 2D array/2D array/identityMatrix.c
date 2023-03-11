//5.Write C Program to Check if a given Matrix is an Identity Matrix. (Using Static Memory Allocation).
// Diagonal elements are 1,rest all are 0.

#include <stdio.h>
void main()
{
    int r, c, a[100][100], flag = 0, i, j;

    printf("Enter the number of rows : ");
    scanf_s("%d", &r);
    printf("Enter the number of columns : ");
    scanf_s("%d", &c);

    if (r == c)
    {
        printf("\nEnter elements of  matrix:\n");
        for (i = 0; i < r; i++)
        {
            for (j = 0; j < c; j++)
            {
                printf("Enter element a[%d[%d]: ", i + 1, j + 1);
                scanf_s("%d", &a[i][j]);
            }
        }


        for (i = 0; i < r; i++)
        {
            for (j = 0; j < c; j++)
            {                               // i == j (diagonal elements)
                if (i == j && a[i][j] != 1) //if diagonal elements are not equal to 1
                {
                    flag = 1;
                    break;                  // if not identity matrix then break...no need to check further 
                }
                else if (i != j && a[i][j] !=0) // if all other elements other than diagnal are not equal to 0
                {
                    flag = 1;
                    break;
                }
            }
            printf("\n");
        }
        if (flag == 1)
        {
            printf("\nNot Identity matrix\n");
        }
        if (flag == 0)
        {
            printf("Identity matrix");
        }
       
  
    }
    else
    {
        printf("\nMatrix should be sqaure matrix(No. of rows = No. of columns)");
    }

}



