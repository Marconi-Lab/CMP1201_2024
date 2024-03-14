#include <stdio.h>

int main()
{
    int rows = 3;
    int columns = 5;

    for (int j = 0; j < rows; j++)
    {
        for(int i = 0; i < columns; i++)
        {
            printf("*");
        }
        printf("\n");
    }


    return 0;
}


    
