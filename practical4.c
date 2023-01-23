// Write a C program to print first n natural number using while loop
#include<stdio.h>
int main(){
    int a,i=1;
    printf("Enter the no. to print its natural upto: ");
    scanf("%d",&a);
    while(i<=a){
        printf("%d\n",i);
        i++;

    }

}