//Write a C program to check whether a year is leap year or not
#include<stdio.h>
int main(){
    int x;
    printf("Enter the year to check whether it is leap year or not:\n");
    scanf("%d",&x);
    if(x%4==0)
    printf("%d is a leap year",x);
    else
    printf("%d is not a leap year",x);

}