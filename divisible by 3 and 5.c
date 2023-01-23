#include<stdio.h>
int main(void)
{
	int i,n;
	printf("Enter the number upto which you want print the odd no.s: ");
	scanf("%d",&n);
	
	for (i=1;i<=n;i++)
	{
		if(i%2==!0)
		{
			printf("%d \n",i);
		}
	}
	return 0;	
}
