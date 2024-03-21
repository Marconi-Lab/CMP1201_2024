#include <stdio.h>

int main()
{
    int i = 2;
    int count = 1;

    while(count <= 10){
        printf("%d\t", i);
        i=i+2;
        count++;
    }

    return 0;
}