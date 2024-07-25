/*
 * This program demonstrates the use of structures in C to store and display student details,
 * including a nested structure for the date of birth.
 *
 * The program follows these steps:
 * 1. Defines a nested structure 'DateOfBirth' to hold day, month, and year.
 * 2. Defines a structure 'student' that includes roll number, name, fees, and a nested 'DateOfBirth'.
 * 3. Declares a variable of type 'student'.
 * 4. Prompts the user to input the student's roll number, name, fees, and date of birth (day, month, year).
 * 5. Outputs the student's details, including the formatted date of birth.
 *
 * Note: The program uses 'scanf("%s", ...)' to read strings, which can be unsafe for inputs with spaces.
 * Consider using 'fgets()' instead for safer input handling.
 *
 */

#include <stdio.h>

// Define a structure for the date of birth
struct DateOfBirth
{
    int day;
    int month;
    int year;
};

// Define a structure to hold student details
struct student
{
    int roll_no;
    char name[80];
    float fees;
    struct DateOfBirth dob; // Nested structure for date of birth
};

int main()
{
    // Declare a variable of type 'student'
    struct student stud1;

    // Input student details
    printf("Enter the roll number: ");
    scanf("%d", &stud1.roll_no);

    printf("Enter the name: ");
    scanf("%s", stud1.name); // Unsafe for names with spaces; consider using fgets

    printf("Enter the fees: ");
    scanf("%f", &stud1.fees);

    // Input date of birth
    printf("Enter your date of birth (DD MM YYYY): ");
    scanf("%d %d %d", &stud1.dob.day, &stud1.dob.month, &stud1.dob.year);

    printf("\n");

    // Output student details
    printf("*************STUDENT'S DETAILS************\n");
    printf("ROLL No. = %1d \n", stud1.roll_no);
    printf("NAME = %s\n", stud1.name);
    printf("FEES = %.2f\n", stud1.fees);
    printf("DOB = %02d/%02d/%04d\n", stud1.dob.day, stud1.dob.month, stud1.dob.year);

    return 0;
}
