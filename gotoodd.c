#include<stdio.h>
int main()
{
    int n;
    label:
    printf("Please enter the number the odd \n");
    scanf("%d",&n);

    if(n%2==0){
        printf("The number is even\n");
    goto label;
    }
    else{
        printf("Done, The number is odd ");
    }
    
    return 0;
}