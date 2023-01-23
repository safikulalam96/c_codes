#include<stdio.h>
int main()
{
    int a[3][3],i,j;
    
    printf("Enter the matrix in order wise\n");
    for(i=0; i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("The matrix is:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d\t  ",a[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < 3; i++)
    {
        int sr = 0, sc = 0;
        for (j = 0; j < 3; j++)
        {
            sr=sr+a[i][j];
            sc=sc+a[j][i];

        }
        printf("\n");
        printf("sumofrow%d, sumofcolumn%d\n", sr, sc);
       }
      
       return 0;
}
