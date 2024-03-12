#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This program demonstrates use of the sizeof operator
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{

int intType;
long int longType;
float floatType;
double doubleType;
char charType;

/** sizeof gives the size in bytes */

printf("int: %zu \n", sizeof(intType));
printf("float: %zu \n", sizeof(floatType));
printf("double: %zu \n", sizeof(doubleType));
printf("char: %zu \n", sizeof(charType));

return (0);

}
