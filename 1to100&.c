#include<stdio.h>
#include<conio.h>
int main()
{
    int i,c=0;
    for(i=1;i<=100;i++)
    {
        if(i%2!=0 && i%5!=0 && i%3!=0)
        {
            printf("  %d",i);
            c++;
        }
        
    }
    printf("\ntotal no.%d",c);
    return 0;
}
