//this is for febonacci series
#include<stdio.h>
int main(void)
{
	int n,s;
	printf("Enter the number to print febonacci series upto:\n");
	scanf("%d",&n);

	int a=0,b=1;
	printf("the febonacci series is here:\n%d  ",a);
	s=a+b;
	while(s<=n){
		printf("%d  ",s);
		s=a+b;
		a=b;
	    b=s;
	}
	return 0;
	
}
