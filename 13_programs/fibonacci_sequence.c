#include <stdio.h>

/*
Fibonacci Sequence:
The Fibonacci sequence is a series of numbers where each number is the sum of the two preceding ones.
It starts with 0 and 1, and the next number in the sequence is the sum of the previous two numbers.

Fibonacci sequence: 0, 1, 1, 2, 3, 5, 8, 13, 21, ...

Applications:
- Fibonacci numbers appear in many natural phenomena and are used in various fields such as mathematics, computer science, and biology.
- They are used in algorithms, particularly in dynamic programming and recursion.
- Fibonacci numbers are used in financial markets, such as Fibonacci retracement in technical analysis.
*/

int main()
{
    int N, first = 0, second = 1, next, sum = 0;

    printf("Enter the number of terms (N) for Fibonacci sequence: ");
    scanf("%d", &N);

    printf("Fibonacci sequence up to %d terms:\n", N);

    // Print the first two terms of Fibonacci sequence
    printf("%d, %d", first, second);

    // Calculate and print the Fibonacci sequence up to N terms
    sum = first + second; // Initialize sum with first two terms
    for (int i = 3; i <= N; i++)
    {
        next = first + second;
        printf(", %d", next);
        sum += next;
        first = second;
        second = next;
    }

    printf("\nSum of Fibonacci sequence up to %d terms: %d\n", N, sum);

    return 0;
}
