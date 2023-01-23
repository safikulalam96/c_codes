// this is for armstrong
#include<stdio.h>
int main(void)
{
	int n,m,temp;
	int x=0;
	printf("Enter the number to check whether it is Armstrong or not:\n");
	scanf("%d", &n);
	temp=n;
	while(n>0){
		m=n%10;
		x=x+m*m*m;
		n=n/10;
	}
	if(temp==x){
		printf("The number is Armstrong");
	}
	else{
		printf("The number is not Armstrong");
	}
	return 0;	
}
