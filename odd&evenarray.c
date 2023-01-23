#include<stdio.h>
int main()
{
    int a[5],i;
    int odd=0,even=0;
    printf("The number in the array\n");
    for(i=0;i<5;i++)
    scanf("%d",&a[i]);

    for (i = 0; i < 5; i++)
    {
        if(a[i]%2==0){
        even++;
        }
        else{
        odd++;
        }
    }
    printf("The number of odd in the array is= %d\n",odd);
    printf("The number of even in the array is= %d", even);
    return 0;
}
