#include <stdio.h>
#define ARRAY_SIZE 200

double average( int[], int );

int main()
{
    int x[ARRAY_SIZE];
    double x_avg;
    x_avg = average ( x , ARRAY_SIZE);

    return 0;
}
double average( int a[], int n ) {
 int i, total = 0;
 for ( i = 0 ; i < n ; i = i + 1 )
 total = total + a[i];
 return ((double) total / (double) n);
}
