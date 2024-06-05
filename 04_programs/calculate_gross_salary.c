#include <stdio.h>

// Program #1: Calculate Gross Salary
int main()
{
    float basic_salary, da, hra, gross_salary;

    printf("Enter the basic salary: ");
    scanf("%f", &basic_salary);

    da = 0.40 * basic_salary;  // Dearness Allowance
    hra = 0.20 * basic_salary; // House Rent Allowance

    gross_salary = basic_salary + da + hra;

    printf("Gross Salary: %.2f\n", gross_salary);

    return 0;
}
