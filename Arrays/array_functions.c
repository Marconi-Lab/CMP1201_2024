#include <stdio.h>


void print_int_array(int[], int);
int main()
{
    int num[5] ={1,2,3,4,5};

    print_int_array(num, 5);


    return 0;
}

void print_int_array(int list[], int n)
{
    for (int p=0;p<n;p++)
    {
        printf("%d.   %d\n",p, list[p]);
    }

}