/* program to sum all digits */

#include <stdio.h>
int main()
{
    int n, s = 0, l, real;
    printf("Enter the no.");
    scanf("%d", &n);
    real = n;
    while (n != 0)
    {
        l = n % 10;
        s = s + l;
        n = n / 10;
    }
    printf("The sum of the digit of %d = %d", real, s);
    return 0;
}
