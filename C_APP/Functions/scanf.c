#include <stdio.h>

/**
* main - Entry point of the program
*
* Description:  This program uses printf and scanf function to ask user
* to input name and age
*
* Return: Always 0 (Success)
*/
int main(void)
{
char name[50];
int age;

printf("Enter your name: ");
scanf("%s", name);

printf("Enter your age: ");
scanf("%d", &age);

printf("Hello, %s! You are %d years old.\n", name, age);

return (0);

}
