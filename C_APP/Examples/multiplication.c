#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This program displays multiplication
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{

double number1, number2, product;
printf("Enter two numbers: ");

/** Take two inputs */
scanf("%lf %lf", &number1, &number2);

product = number1 * number2;

printf("Pruduct = %lf\n", product);

return (0);

}
