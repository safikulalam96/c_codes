//the find max in two no.s
#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter the 2 no. to check the maximum one:\n");
	scanf("%d%d",&a,&b);
	if (a>b){
	    printf("The maximum no is %d",a);	
	}
	else if (a<b){
		printf("The maximum no is %d",b);
	}
	else{
		printf("The numbers are equal");
	}
	return 0;
}
