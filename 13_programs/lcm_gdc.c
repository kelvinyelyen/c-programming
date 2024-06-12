#include <stdio.h>

int main()
{
    int num1, num2;
    int a, b, temp, gcd_result, lcm_result;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Find GCD using Euclidean Algorithm
    a = num1;
    b = num2;
    while (b != 0)
    {
        temp = b;
        b = a % b;
        a = temp;
    }
    gcd_result = a;

    // Calculate LCM
    lcm_result = (num1 * num2) / gcd_result;

    printf("GCD of %d and %d is: %d\n", num1, num2, gcd_result);
    printf("LCM of %d and %d is: %d\n", num1, num2, lcm_result);

    return 0;
}
