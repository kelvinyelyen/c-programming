#include <stdio.h>

/*
 * Structures in C:
 * - A structure is a user-defined data type that groups related variables of different data types.
 * - Syntax for structure declaration:
 *   struct structureName {
 *       dataType member1;
 *       dataType member2;
 *       ...
 *   };
 */

struct Student
{
    char name[50];
    int age;
    float grade;
};

int main()
{
    // Structure variable declaration and initialization
    struct Student student1 = {"John Doe", 20, 3.75};

    // Access and print structure members
    printf("Student Information:\n");
    printf("Name: %s\n", student1.name);
    printf("Age: %d\n", student1.age);
    printf("Grade: %.2f\n", student1.grade);

    return 0;
}
