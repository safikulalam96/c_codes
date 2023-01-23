#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,n,z;
    printf("Enter the number to print its table:\n");
    scanf("%d",&n);
    for(i=1;i<=10;i++){
    	printf("\n%d*%d=%d",n,i,i*n);
	}
   return 0;
}
