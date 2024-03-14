#include <stdio.h>

int main()
{
    int n = 7;
    int factorial=1;
    while(n>=1)
    {
        printf("%d\n", n);
        factorial = factorial * n;
        n--;
    }
    printf("factorial = %d\n", factorial);

    return 0;
}