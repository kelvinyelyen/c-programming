#include <stdio.h>

/*
 * File I/O in C:
 * - File operations include opening, reading, writing, and closing files.
 * - Common functions for file I/O:
 *   - fopen(): Opens a file.
 *   - fclose(): Closes a file.
 *   - fprintf(): Writes formatted output to a file.
 *   - fscanf(): Reads formatted input from a file.
 */

int main()
{
    FILE *file;
    char name[50];
    int age;

    // Open a file in write mode
    file = fopen("student.txt", "w");
    if (file == NULL)
    {
        printf("Error opening file.\n");
        return 1;
    }

    // Write to the file
    fprintf(file, "Name: %s\n", "John Doe");
    fprintf(file, "Age: %d\n", 20);

    // Close the file
    fclose(file);

    // Open the file in read mode
    file = fopen("student.txt", "r");
    if (file == NULL)
    {
        printf("Error opening file.\n");
        return 1;
    }

    // Read from the file
    fscanf(file, "Name: %s\n", name);
    fscanf(file, "Age: %d\n", &age);

    // Print the data read from the file
    printf("Student Information from file:\n");
    printf("Name: %s\n", name);
    printf("Age: %d\n", age);

    // Close the file
    fclose(file);

    return 0;
}
