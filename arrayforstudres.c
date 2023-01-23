#include<stdio.h>
int main()
{
    float sum = 0,av;
    int i, marks[5];
    printf("Enter the marks of the subjects:\n");
    for(i=0;i<5;i++){
        scanf("%d", &marks[i]);
    }
    for(i=0;i<5;i++){
        sum =sum+marks[i];
    }
    av=sum/5;
    printf("Your average is= %.2f",av);
    return 0;
}
