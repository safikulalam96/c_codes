#include<stdio.h>
#include<string.h>
int main()
{
    char a[30],count=0;
    printf("Enter the characters:\n");
    //scanf("%s",a);
    gets(a);
    count=strlen(a);
    printf("The total words presents in this character is:%d",count);
    return 0;

}