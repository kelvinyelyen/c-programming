#include <stdio.h>

// Program #2: Calculate Aggregate Marks and Percentage
int main()
{
    int marks[5];
    int i, total = 0;
    float percentage;

    printf("Enter the marks obtained in five subjects: ");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &marks[i]);
        total += marks[i];
    }

    percentage = (total / 5.0);

    printf("Aggregate Marks: %d\n", total);
    printf("Percentage: %.2f%%\n", percentage);

    return 0;
}
