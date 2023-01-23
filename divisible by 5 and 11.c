#include <stdio.h>
int main(void)
{
    int n;
    printf("enter number \n");
    scanf("%d",&n);

    if(n%5==0 && n%11==0)
	{
        printf("%d is divisible by both 5 and 11 \n",n);
    }
    else
	{
    	printf("%d is not divisible by 5 and 11 both simultaneously. \n",n);
	}
	return 0;
}
