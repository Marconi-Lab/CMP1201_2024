#include <stdio.h>
// #include <stdlib.h>

int main(){
    char y = 't';


    switch(y)   //test the switch case on value of variable y
    {
        case 'a':                               // if y == a
            printf("y is a");
            break;                               // stop testing and break out the switch structure
        case 'b':                               // if y == b
            printf("y is b");
            break;
        case 'c':                               // if y == c
            printf("y is c");
            break;
        default:                                //if y is none of the above
            printf("y is unknown to us");

    }

    printf("\nDone with testing\n");


    return 0;
}
