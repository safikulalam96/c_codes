#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,z;
	printf("Enter the two no.s:\n");
	scanf("%d%d", &a,&b);
	z=pow(a+b,3);
	printf("The cube%d%d is :%d\n",a,b,z);
}
