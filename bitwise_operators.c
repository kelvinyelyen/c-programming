#include <stdio.h>

/*
 * Bitwise Operations in C:
 * - Bitwise operators perform operations at the bit level.
 * - They manipulate individual bits of operands.
 * - Common bitwise operators include AND (&), OR (|), XOR (^), NOT (~), left shift (<<), and right shift (>>).
 * - These operators are useful for low-level programming, such as working with hardware or optimizing algorithms.
 */

int main()
{
    /* Signed vs. Unsigned Integers:
     * - Signed integers can represent both positive and negative numbers.
     * - Unsigned integers can represent only non-negative numbers (zero and positive).
     * - Signed integers use the leftmost bit as a sign bit in two's complement representation.
     * - Unsigned integers do not have a sign bit; instead, all bits contribute to the value.
     */

    // Initializing unsigned integers a and b
    unsigned int a = 5; // 0101 in binary
    unsigned int b = 9; // 1001 in binary

    /* Mathematical Explanation of Bitwise Operators:
     * - Bitwise AND (&): Performs a logical AND operation on each pair of corresponding bits.
     * - Bitwise OR (|): Performs a logical OR operation on each pair of corresponding bits.
     * - Bitwise XOR (^): Performs a logical XOR (exclusive OR) operation on each pair of corresponding bits.
     * - Bitwise NOT (~): Inverts all the bits of the operand.
     * - Left shift (<<): Shifts all bits in the left operand to the left by the number of positions specified by the right operand.
     * - Right shift (>>): Shifts all bits in the left operand to the right by the number of positions specified by the right operand.
     */

    /* Bitwise AND:
     * - Result is 1 if both bits are 1, otherwise 0.
     */
    printf("a & b = %d\n", a & b); // 0001 = 1

    /* Bitwise OR:
     * - Result is 1 if at least one bit is 1, otherwise 0.
     */
    printf("a | b = %d\n", a | b); // 1101 = 13

    /* Bitwise XOR:
     * - Result is 1 if the bits are different, otherwise 0.
     */
    printf("a ^ b = %d\n", a ^ b); // 1100 = 12

    /* Bitwise NOT:
     * - For unsigned integers, the most significant bit is not interpreted as a sign bit.
     * - For negative numbers, two's complement is used.
     */
    printf("~a = %u\n", ~a); // 11111111111111111111111111111010 = 4294967290 (in 32-bit)

    /* Left shift:
     * - Equivalent to multiplying the left operand by 2 raised to the power of the right operand.
     */
    printf("a << 1 = %d\n", a << 1); // 1010 = 10

    /* Right shift:
     * - Equivalent to dividing the left operand by 2 raised to the power of the right operand.
     */
    printf("a >> 1 = %d\n", a >> 1); // 0010 = 2

    return 0;
}
