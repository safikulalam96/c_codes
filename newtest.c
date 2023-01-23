#include <stdio.h>
int main()
{
    // 1st matrix
    int i, j;
    int r1, c1;
    printf("Enter the row of 1st matrix:\n");
    scanf("%d", &r1);
    printf("Enter the column of 1st matrix:\n");
    scanf("%d", &c1);
    int a[r1][c1];
    printf("Enter the elements of 1st matrix: ");
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c1; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    // 2nd matrix
    int r2, c2;
    printf("Enter the row of 2nd matrix: ");
    scanf("%d", &r2);
    printf("Enter the column of 2nd matrix: ");
    scanf("%d", &c2);
    int b[r2][c2];
    printf("\nEnter the elements of 2nd matrix:");
    for (i = 0; i < r2; i++)
    {
        for (j = 0; j < c2; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    printf("\n");
    // check
    if (r2 != c1)
    {
        printf("Multiplication is not applicable");
    }
    else
    { // multiplication of 2 matrix
        int res[r1][c2];
        for (i = 0; i < r1; i++)
        {
            for (j = 0; j < c2; j++)
            {
                res[i][j] = 0;
                for (int k = 0; k < c1; k++)
                {
                    res[i][j] = res[i][j] + a[j][k] * b[k][j];
                }
            }
            // print
            printf("The result is:\n");

            for (i = 0; i < r1; i++)
            {
                for (j = 0; j < c2; j++)
                {
                    printf("%d ", res[i][j]);
                }
                printf("\n");
            }
        }
    }
    return 0;
}
