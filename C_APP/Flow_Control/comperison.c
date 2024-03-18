#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description:  This program demonstrates use of comperison operators
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)

{
    int a = 5, b = 10;

    // greater than operator
    printf("%d\n", a > -1); // 1
    printf("%d\n", a > 5); // 0

    // greater than or equal to
    printf("%d\n", a >= 5); // 1
    printf("%d\n", a >= b); // 0

    // less than operator
    printf("%d\n", a < b); // 1
    printf("%d\n", a < 5); // 0

    // less than or equal to
    printf("%d\n", a <= 5); // 1 
    printf("%d\n", a <= 1); // 0

    // equal to operator
    printf("%d\n", a == 5); // 1
    printf("%d\n", a == b); // 0

    // not equal to 
    printf("%d\n", a != 5); // 1
    printf("%d\n", a != 7); // 0

    return (0);

}


