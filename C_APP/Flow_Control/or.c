#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This program demonstrates use of "Or" operator
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)

{
int age = 24, salary = 950, result;

/* true because age >= 18 is true
* even though salary is > 1000 is false */
result = (age >= 18 || salary > 1000);
printf("%d\n", result); /* 1 */

/* false because both operands are false */
result = (age >= 30 || salary > 1000);
printf("%d\n", result); /* 0 */

return (0);

}
