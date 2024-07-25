#include <stdio.h>

int main()
{
    // 0 0 1 1 0

    // char x;
    // int y;
    // x = 100;
    // y = 125;
    // printf("%c \n", x); // d
    // printf("%d \n", y); // 125
    // printf("%d \n", x); //  100

    // int x = 100;
    // printf("%d \n", 10 + x++); // 110 /n112 /n 110
    // printf("%d \n", 10 + ++x); // 112

    // int x = 5, y = 10, z = 10;
    // x = y == z; // 5 = 10 == 10 => 10 == 10
    // printf("%d", x); // true (1)

    // int x = 100, y = 200;
    // printf("%d", (x > y) ? x : y); // 200

    // a
    // int a = 1, b, c, d, e;
    // b = ++a;
    // c = a++ + b--;
    // d = ++a + --b + c++;
    // e = a++ + b-- + ++c + d--;
    // printf("a: %d\n", a); // Output: a: 5
    // printf("b: %d\n", b); // Output: b: -1
    // printf("c: %d\n", c); // Output: c: 6
    // printf("d: %d\n", d); // Output: d: 7
    // printf("e: %d\n", e); // Output: e: 18

    // b
    //  int a = -2, b, c, d, e;
    //  b = ++a;
    //  c = a++ + b--;
    //  d = ++a + --b + c++;
    //  e = a++ + b-- + ++c + d--;
    //  printf("a: %d\n", a); // Output: a: 2
    //  printf("b: %d\n", b); // Output: b: -4
    //  printf("c: %d\n", c); // Output: c: 0
    //  printf("d: %d\n", d); // Output: d: -5
    //  printf("e: %d\n", e); // Output: e: -6

    // c
    //  int a = 1, b, c, d, e;
    //  b = a++;
    //  c = ++a + --b;
    //  d = a++ + b-- + ++c;
    //  e = ++a + --b + c++ + --d;
    //  printf("a = %d\n", a); // Output: a: 5
    //  printf("b = %d\n", b); // Output: b: -2
    //  printf("c = %d\n", c); // Output: c: 5
    //  printf("d = %d\n", d); // Output: d: 6
    //  printf("e = %d\n", e); // Output: e: 13

    // d
     int a = 6, b, c, d, e;
     b = ++a;
     c = a++ + b--;
     d = ++a + --b + c++;
     e = a++ + b-- + ++c + d--;
    //  printf("a = %d\n", a); // Output: a: 10
    //  printf("b = %d\n", b); // Output: b: 4
    //  printf("c = %d\n", c); // Output: c: 16
    //  printf("d = %d\n", d); // Output: d: 27
    //  printf("e = %d\n", e); // Output: e: 58

    // e
    //  int a = -3, b, c, d, e;
    //  b = ++a;
    //  c = a++ + b--;
    //  d = ++a + --b + c++;
    //  e = a++ + b-- + ++c + d--;
    //  printf("a = %d\n", a); // Output: a: 1
    //  printf("b = %d\n", b); // Output: b: -5
    //  printf("c = %d\n", c); // Output: c: -2
    //  printf("d = %d\n", d); // Output: d: -9
    //  printf("e = %d\n", e); // Output: e: -14

    // int a = 24; // Binary: 0001 1000
    // int b = 36; // Binary: 0010 0100

    // // a & b (Bitwise AND)
    // int result_and = a & b;

    // // a | b (Bitwise OR)
    // int result_or = a | b;

    // // a ^ b (Bitwise XOR)
    // int result_xor = a ^ b;

    // // ~a (Bitwise NOT of a)
    // int result_not_a = ~a;

    // // ~b (Bitwise NOT of b)
    // int result_not_b = ~b;

    // // a << 3 (Left shift a by 3)
    // int result_left_shift = a << 3;

    // // b >> 3 (Right shift b by 3)
    // int result_right_shift = b >> 3;

    // printf("a & b = %d\n", result_and); // 0 (00000000)
    // printf("a | b = %d\n", result_or); // 60 (111100)
    // printf("a ^ b = %d\n", result_xor); // 60 (111100)
    // printf("~a = %d\n", result_not_a); // -25
    // printf("~b = %d\n", result_not_b); // -37
    // printf("a << 3 = %d\n", result_left_shift); // 192
    // printf("b >> 3 = %d\n", result_right_shift); // 4

    // int value = 5;      // Binary: 0000 0101
    // int shiftLeft = 3;  // Shift left by 3 positions
    // int shiftRight = 2; // Shift right by 2 positions

    // int resultLeft = value << shiftLeft;   // 5 * 2^3 = 5 * 8 = 40
    // int resultRight = value >> shiftRight; // 5 / 2^2 = 5 / 4 = 1

    // printf("Multiplying %d by 2^%d gives %d\n", value, shiftLeft, resultLeft);
    // printf("Dividing %d by 2^%d gives %d\n", value, shiftRight, resultRight);

    // int num;
    // printf("Hexadecimal number: ");
    // scanf("%x", &num);
    // printf("Octal number: %o \n", num);
    // return 0;
       
}
