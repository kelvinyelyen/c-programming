// Program #5 : Interchange the Contents of C &D
#include <stdio.h>

int main()
{
    int C, D;

    printf("Enter two numbers (C and D): ");
    scanf("%d %d", &C, &D);

    printf("Before interchange: C = %d, D = %d\n", C, D);

    C = C + D;
    D = C - D;
    C = C - D;

    printf("After interchange: C = %d, D = %d\n", C, D);

    return 0;
}
