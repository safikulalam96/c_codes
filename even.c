#include <stdio.h>
int main(int argc, char const *argv[])
{
    int i, n;
    printf("Enter any number: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        int even;
        if (i % 2 == 0)
        {
            printf("%d ", i);
        }
        else
        {
            continue;
        }
    }

    return 0;
}
