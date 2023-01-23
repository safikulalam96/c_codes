#include<stdio.h>
int main()
{
    int p=1; int n,i;
    printf("Enter the no upto which you want to print factorial\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        p = p * i;
        
    }
    printf("the factorial %d is = %d ",n, p);

    return 0;
}