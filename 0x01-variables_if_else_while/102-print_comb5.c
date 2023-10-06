#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main - Entry point of the program
 * Description: This function print alphabets
 * Return: Always 0
 */

int main(void)
{
int a;
int b;

for (a = 0; a < 10; a++)
{
for (b = 0; b < 10; b++)
{
if (a * 10 + b < 10)
{
putchar('0');
}
putchar(a + '0');
putchar(b + '0');
if (a < 9 || b < 9)
{
putchar(',');
putchar(' ');
}
}
}

putchar('\n');

return (0);
}
