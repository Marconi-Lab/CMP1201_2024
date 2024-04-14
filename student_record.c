#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define NMBR_OF_GRD 50
float avg(int [], int);
char letter_grade( float average);
void print_array(int [], int);

int main()
{
    int size;
    struct Student
    {
        char first_name[40];
        char last_name[30];
        char full_name[75];
        char hall[15];
        int num_of_grades;
        int grades[NMBR_OF_GRD];
        char finalgrade;
    };

    struct Student student1;
    char st_firstname[30], st_lastname[30], st_hall[15], st_finalgrade;
    int st_grades[NMBR_OF_GRD];
    

    printf("enter your First name");
    scanf("%s", st_firstname);
    strcpy(student1.first_name, st_firstname);

    printf("enter your last name");
    scanf("%s", st_lastname);
    strcpy(student1.last_name, st_lastname);
    strcpy(student1.full_name, student1.first_name);
    strcat(student1.full_name, " ");
    strcat(student1.full_name, student1.last_name);
    // strcpy(student1.full_name, student1.first_name);

    printf("Enter your Hall of Resisdence\n");
    scanf("%s", st_hall);
    strcpy(student1.hall, st_hall);

    printf("Enter the number of grades");
    scanf("%d",&size);
    if ( size < NMBR_OF_GRD && size > 0){
        printf("Enter your grades for your subjects.\n");
        for (int n = 0; n < size; n++){
            scanf("%d", &st_grades[n]);
        }
    }
    else
    printf("Invalid number of grades.");

    student1.num_of_grades = size;
        for (int i = 0; i < size; i++) {
            student1.grades[i] = st_grades[i];
    

    }
    float Average_grade = avg(student1.grades, student1.num_of_grades);
    char average = letter_grade(Average_grade);
    //strcpy(student1.finalgrade, average);
    student1.finalgrade = average;
   


    printf("Full Name: %s\n", student1.full_name);
    printf("Hall of Residence: %s\n", student1.hall);
    printf("Grades: ");
    print_array(student1.grades, student1.num_of_grades);
    printf("Average Grade: %f\n", Average_grade);
    printf("Letter Grade: %c", student1.finalgrade);



    return 0;
}

float avg(int arr[], int size_of_array){
    int sum = 0;
    for (int i = 0; i < size_of_array; i++){
        sum+=arr[i];
    }
    float avg = sum / size_of_array;
    return avg;
}
char letter_grade( float average){
     if (average >= 80)
    return 'A';
    else if (average >= 60)
    return 'B';
    else
    {
        return 'C';
    }    
}

void print_array(int arr[], int size){
    for ( int i = 0; i < size -1; i++){
        printf("%d, ", arr[i]);
    }
    printf("%d.", arr[size - 1]);
    printf("\n");
}
