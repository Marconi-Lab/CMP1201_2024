#include <stdio.h>
// #include <math.h>

int main()
{
    int x;
    while(1)
    {
        printf("Enter a number: ");
        scanf("%d", &x);
        printf("The number is %d\n",x);
        if (x < 0)
        {
            printf("Invalid number\n");
            break;
        }
        
    }
    printf("We are out of the loop");

    return 0;

}