#include "main.h"

/**
 * jack_bauer -  Prints last digit of a number.
 * Return: number
 */
void times_table(void)
{
int i, j;
for (i = 0; i <= 9; i++)
{
__putchar('0');
__putchar(',');
__putchar(' ');
for (j = 1; j <= 9; j++)
{
int p = i * j;
if (p <= 9)
_putchar(' ');
else if ( p>9 )
_putchar((p / 10) + '0');
_putchar((p % 10) + '0');
if (j < 9)
{
_putchar(',');
_putchar(' ');
}
}
_putchar('\n');
}
}

