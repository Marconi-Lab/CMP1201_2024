#include <stdio.h>
#define COLS 5
#define ROWS 3

int main()
{
    int row,col;
    for (row =1;row <=ROWS;row++)
    {
        printf("%d.\t",row);
        
        for (col=1;col<=COLS;col++)
        {
            printf("*");
        }
        printf("\n");
    }




    return 0;
}