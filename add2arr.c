#include<stdio.h>
int main()
{
    int a[5],b[5],i;
    int c[5];
    printf("Enter the first numbers of array:\n");
    for(i=0;i<5;i++)
    scanf("%d",&a[i]);
    printf("Enter the second numbers of array:\n");
    for (i = 0; i < 5; i++)
    scanf("%d",&b[i]);
    for(i=0;i<5;i++){
        c[i] = a[i] + b[i];
        printf("the sum of the index [%d] is= %d\n",i,c[i]);
    }
   return 0;
}