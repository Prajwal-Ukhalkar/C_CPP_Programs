//8.Write a C Program to find the transpose of a given matrix(Using Static  Memory Allocation).

#include <stdio.h>
void main()
{
    int r1, c1, a[10][10], i, j = 0;
    int at[10][10];

    printf("Enter the number of rows of 1st matrix : ");
    scanf_s("%d", &r1);
    printf("Enter the number of columns of 1st matrix : ");
    scanf_s("%d", &c1);



    if (r1 == c1) // rows and cols must be equal i.e square matrix
    {
        printf("\nEnter elements of  matrix:\n");
        for (i = 0; i < r1; i++)
        {
            for (j = 0; j < c1; j++)
            {
                printf("Enter element a[%d[%d]: ", i + 1, j + 1);
                scanf_s("%d", &a[i][j]);
            }
        }

        printf("Original matrix is :\n");
        for (i = 0; i < r1; i++)
        {
            for (j = 0; j < c1; j++)
            {
                printf("%d\t", a[i][j]);
                at[i][j] = a[j][i];

            }
            printf("\n");
        }
        printf("\n");

        printf("\n Transpose matrix is :\n");
        for (i = 0; i < r1; i++)
        {
            for (j = 0; j < c1; j++)
            {
                printf("%d\t", at[i][j]);
            }
            printf("\n");
        }
    }
    else
        printf("Columns of 1st matrix and rows of 2nd matrix should be equal");


}



