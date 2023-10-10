#include "main.h"

/**
 * print_last_digit -  Prints last digit of a number.
 * @n: number to  check.
 * Return: number
 */
int print_last_digit(int n)
{
int d = n % 10;
if (d <= 0)
d = -d;
return (d);
}
