#include "stdio.h"

int main()
{
    int foo, bar;
    foo = (bar=6);

    printf("%d", foo);
    return 0;
}