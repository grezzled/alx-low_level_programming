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
char a;
char A;
for (a = 'a'; a <= 'z'; a++)
{
putchar(a);
}
for (A = 'A'; A <= 'Z'; A++)
{
putchar(A);
}
putchar('\n');

return (0);
}
