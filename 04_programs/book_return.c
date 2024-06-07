#include <stdio.h>

int main()
{
    int daysLate;
    float fine = 0.0;

    printf("Enter the number of days the book is late: ");
    scanf("%d", &daysLate);

    // Calculate the fine based on the number of days late
    if (daysLate >= 1 && daysLate <= 5)
    {
        fine = 0.50 * daysLate; // 50 paisa fine for each day up to 5 days
    }
    else if (daysLate >= 6 && daysLate <= 10)
    {
        fine = 5.0 + (daysLate - 5); // 1 rupee fine for each day from 6 to 10 days
    }
    else if (daysLate > 10 && daysLate <= 30)
    {
        fine = 10.0 + (daysLate - 10) * 5; // 5 rupees fine for each day after 10 days
    }
    else if (daysLate > 30)
    {
        printf("Your membership is cancelled. You returned the book after 30 days.\n");
        return 0;
    }

    printf("Fine for returning the book %d days late: Rs. %.2f\n", daysLate, fine);

    return 0;
}
