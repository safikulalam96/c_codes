#include<stdio.h>
int main()
{
    int n,m,b,z;
    printf("Enter the 4digit number to add its first and last digit:\n");
    scanf("%d",&n);
    m=n%10;
    z=z+m;
    b=n/1000;
    z=z+b;
    printf("The sum of the first and last digit is:\n",z);
    return 0;
}