#include <stdio.h>

int main()
{
    char grade;
    printf("Enter your grade(A,B,C,D,F): ");
    scanf("%c", &grade);

    switch(grade)   //test the switch case on value of variable grade
    {
        case 'A': 
            printf("Excellent,Your grade is A"); 

            break;

        case 'B': // if grade == B
            printf(" Awesome,Your grade is B");
            break;

        case 'C': 
            printf(" Not bad,Your grade is C");
            break;

        case 'D':
            printf(" Watch out, Your grade is D");
            break;

        case 'F':
            printf(" Try again, You failed! Your grade is F");
            break;
        
        default: 
            printf("Your grade is unknown to us");
                                  
    }

    return 0;
}