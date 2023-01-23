#include <stdio.h>
 #include <stdlib.h> 
int main() 
{
int a,b,i;
 printf("Enter the range to print odd numbers\n"); 
scanf("%d%d",&a,&b);
 printf("Odd numbers between %d and %d are\n",a,b); 
for(i=a;i<=b;i++) { if(i%2==1)
      {
       printf("%d ",i); 
      } 
} 
return 0; 

}

