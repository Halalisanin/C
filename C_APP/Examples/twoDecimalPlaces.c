#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This program shows numbers with up to 2 decimal places
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{

double number1 = 45.5385;
float number2 = 45.0;

printf("%.2lf\n", number1); /** 45.54 */

printf("%.2f\n", number2); /** 45.0 */

return (0);

}
