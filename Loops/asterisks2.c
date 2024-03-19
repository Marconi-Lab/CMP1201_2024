#include <stdio.h>
#define ROWS 5

int main()
{
    int row,col;

    for(row=1;row<=ROWS;row++)
    {
        for (col = 1; col <= row;col++)
    {
        printf("*");
    }
    printf("\n");
    }
    return 0;
}