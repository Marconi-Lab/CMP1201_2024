#include <stdio.h>

int main()
{
    struct Student{
        char name[30];
        char hall[15];
        int age;
        double cgpa;
    };

    struct Student student1;
    char st_name[30], st_hall[15];
    int st_age;
    double st_cgpa;

    printf("Enter your name: ");
    fgets(st_name,30, stdin);
    strcpy(student1.name, st_name);

    printf("Enter your hall: ");
    scanf("%s", st_hall);
    strcpy(student1.hall, st_hall);


    printf("Enter your age: ");
    scanf("%d", &st_age);
    student1.age = st_age;

    printf("Enter your cgpa: ");
    scanf("%lf", &st_cgpa);
    student1.cgpa = st_cgpa;

    
    printf("Name: %s\n", student1.name);
    printf("Hall: %s\n", student1.hall);
    // printf("Gender: %c\n", student1.gender);
    printf("Age: %d\n", student1.age);
    printf("Cgpa: %lf\n", student1.cgpa);


    return 0;
}