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
for (a = '0'; a <= '9'; a++)
{
for (b = a + 1; b <= '9'; b++)
{
putchar(a);
putchar(b);
if (a != '8' || b != '9')
{
putchar(',');
putchar(' ');
}
}
}

putchar('\n');

return (0);
}
