#include <stdio.h>

/*
This program calculates the sum of the series: S = 2 + 4 + 6 + 8 + ... up to N terms.
It uses a single function (main) to compute the sum of the first N terms of the series.
*/

int main()
{
    int N, sum = 0;

    printf("Enter the number of terms (N): ");
    scanf("%d", &N);

    // Calculate the sum of the series 2 + 4 + 6 + ... up to N terms
    for (int i = 1; i <= N; i++)
    {
        sum += 2 * i;
    }

    printf("The sum of the series with %d terms is: %d\n", N, sum);

    return 0;
}
