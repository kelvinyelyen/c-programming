#include <stdio.h>

/*
 * This program demonstrates using a union with a function to handle different types of measurements.
 * The union 'Measurement' can hold either an int (distance) or a float (temperature).
 * The function 'printMeasurement' prints the appropriate value based on the type specified.
 */
union Measurement
{
    int distance;
    float temperature;
};

// Function to print the value of the union based on the type
void printMeasurement(union Measurement m, int type)
{
    if (type == 0)
    {
        printf("Distance: %d meters\n", m.distance);
    }
    else if (type == 1)
    {
        printf("Temperature: %.2f degrees Celsius\n", m.temperature);
    }
}

int main()
{
    union Measurement measurement;

    // Store and print an integer value (distance)
    measurement.distance = 500;
    printMeasurement(measurement, 0);

    // Store and print a float value (temperature)
    measurement.temperature = 36.5;
    printMeasurement(measurement, 1);

    return 0;
}
