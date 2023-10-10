#include "main.h"

/**
 * jack_bauer -  Prints last digit of a number.
 * Return: number
 */
void times_table(void)
{
for (int i = 0; i <= 9; i++)
{
for (int j = 0; j <= 9; j++)
{
int p = i * j;
putchar((p / 10) + '0');
putchar((p % 10) + '0');
if (j < 9)
{
putchar(' ');
putchar(',');
}
}
putchar('\n');
}

return (0);
}

