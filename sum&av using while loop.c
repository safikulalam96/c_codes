#include<stdio.h>
int main()
{
    int i,n;
    float av;
    int sum=0;
    printf("Enter the no.:\n");
    scanf("%d",&n);
    i=1;
    while(i<=n){
        sum=sum+i;
        i=i+1;
    }
    av= (float)sum/n;
    printf("the sum is:%d",sum);
    printf("\nThe av of the sum till number is:%f",av);
   

    return 0;

}