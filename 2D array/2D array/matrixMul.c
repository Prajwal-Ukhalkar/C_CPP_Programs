//5.Write C Program to matrix Multiplication (Using Static Memory Allocation).
// Diagonal elements are 1,rest all are 0.

#include <stdio.h>
void main()
{
    int r1,c1, a[100][100],b[100][100],mul[100][100], k, i, j, sum;
    int r2, c2;

    printf("Enter the number of rows of 1st matrix : ");
    scanf_s("%d", &r1);
    printf("Enter the number of columns of 1st matrix : ");
    scanf_s("%d", &c1);

    printf("Enter the number of rows of 2nd matrix : ");
    scanf_s("%d", &r2);
    printf("Enter the number of columns of 2nd matrix : ");
    scanf_s("%d", &c2);



    if (c1 == r1) //1st matrix col and 2nd matrix rows must be equal
    {
        printf("\nEnter elements 1st of  matrix:\n");
        for (i = 0; i < r1; i++)
        {
            for (j = 0; j < c1; j++)
            {
                printf("Enter element a[%d[%d]: ", i + 1, j + 1);
                scanf_s("%d", &a[i][j]);
            }
        }

        printf("\nEnter elements 2st of  matrix:\n");
        for (i = 0; i < r1; i++)
        {
            for (j = 0; j < c1; j++)
            {
                printf("Enter element a[%d[%d]: ", i + 1, j + 1);
                scanf_s("%d", &b[i][j]);
            }
        }


        for (i = 0; i < r2; i++)
        {
            for (j = 0; j < c2; j++)
            {
                sum = 0;
                for (k = 0; k < c1; k++)
                {
                    sum = sum + a[i][k] * b[k][j];
                    mul[i][j] = sum;

                }

            }
        }

        for (i = 0; i < r1; i++)
        {
            for (j = 0; j < c1; j++)
            {
                printf("%d\t ", mul[i][j]);

            }
            printf("\n");
        }
    }
    else
        printf("Columns of 1st matrix and rows of 2nd matrix shiuld be equal");
        

}



