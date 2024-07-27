#include <stdio.h>

int main()
{
    /* code */
    int a = 9, b, c, d, e;
    b = ++a;
    c = a++ + b--;
    d = ++a + --b + c++;
    e = a++ + b-- + ++c + d--;
    printf("a = %d\n", a); // Output: a: 10
    printf("b = %d\n", b); // Output: b: 4
    printf("c = %d\n", c); // Output: c: 16
    printf("d = %d\n", d); // Output: d: 27
    printf("e = %d\n", e); // Output: e: 58
    return 0;
}

// set 1

// a = 9 b = 5 c = 16 d = 27 e = 54

// set 2
// C  C  A  C  C
// a = 12 b = 5 c = 19 d = 34 e = 71

// set 3
// C  C  C  B  B
// a = 8 b = 2 c = 12 d = 19 e = 42

// set 4
// A  A  A  C  C
// a = -7 b = -14 c = -19 d = -42 e = -83

// set 5
// A  A  A  C  C
// a = 11 b = 5 c = 18 d = 31 e = 66
