#include <stdio.h>

int main()
{
    // int n[] = { 3,2, 4, 5 };
    double grades[7] = {1.2, 4.0, 3.8, 2.5, 3.3, 0.0, 3.4}; 
    grades[2]= 5.0;

    printf("%.1lf\n",grades[2]);

    // double average,sum = 0;

    // for( int i=0; i< 7  ; i++ )
    // {
    //     sum = sum + grades[i];

    // }

    // average = sum/7;
    // printf("Average: %.2lf\n", average);
    // printf("%d\n",n[5]);


    return 0;
}