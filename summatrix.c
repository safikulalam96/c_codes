1#include<stdio.h>
#include<math.h>
int main()
{
    int a[3][3],b[3][3],c[3][3],i,j;
    printf("Enter the first matrix:\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter the second matrix:\n");
    for (i = 0; i < 3; i++)
    {
        for (j= 0; j< 3; j++)
        {
            scanf("%d\n", &b[i][j]);
        }
    }
    printf("The first matrix is:\n");
    for (i = 0; i < 3; i++)
    {
        for (j= 0; j< 3; j++)
        {
            printf("%d\t",a[i][j]);
           
        }
        printf("\n");
    }

    printf("The second matrix is:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d\t", b[i][j]);
        }
        printf("\n");
    }

    printf("The sum matrix is:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            c[i][j]=a[i][j]+b[i][j];
            printf("%d  ",c[i][j]);
           
        }
        printf("\n");
    }
}
