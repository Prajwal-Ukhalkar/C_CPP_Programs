//3. Write a c program to check whether given matrix is upper triangular or not (Using Static Memory Allocation).

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
        for (i = 0; i < r; ++i)
        {
            for (j = 0; j < c; ++j)
            {
                printf("Enter element a%d%d: ", i + 1, j + 1);
                scanf_s("%d", &a[i][j]);
            }
        }


        for (i = 0; i < r; ++i)
        {
            for (j = 0; j < c; ++j)
            {
                printf("%d\t", a[i][j]);
                if (i > j && a[i][j] == 0)
                {
                    flag = 1;
                }
            }
            printf("\n");
        }
        if (flag == 1)
        {
            printf("\nTriangular Matrix\n");
        }
        else if (flag == 0)
            printf("Not Traingular Matrix\n");
    }
    else
    {
        printf("\nMatrix should be sqaure matrix(No. of rows = No. of columns)");
    }

    }

   

