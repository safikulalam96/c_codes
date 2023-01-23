#include<stdio.h>
#include<string.h>
int main()
{
    char s1[30],s2[30];
    printf("Enter the strings respectively:\n");
    gets(s1);
    gets(s2);
    if(strcmp(s1,s2)==0)
    printf("The string is same");
    else 
    printf("The string is not same");

    return 0;
}
