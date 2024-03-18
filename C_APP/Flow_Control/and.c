#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This program demonstrates the use of &&
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)

{
int age = 24, salary = 950, result;

/* true because both age >= 18
* and salary > 600 are true
*/
result = (age >= 18 && salary > 600);
printf("%d\n", result); /* 1 */

/* false because salary > 1000 is false */
result = (age >= 18 && salary > 1000);
printf("%d\n", result); /* 0 */

return (0);

}
