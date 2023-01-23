#include<stdio.h>
#include<conio.h>
int main()
{
    int n;
    int i=1;
    printf("Enter the number:\n");
    scanf("%d",&n);
   
    printnum:
    printf("%d\n",i);
    i++;
    if(i<=n)
    goto printnum;
    return 0;
}
