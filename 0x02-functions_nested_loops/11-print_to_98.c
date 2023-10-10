#include <stdio.h>
/**
 * add -  add two numbers.
 * Return: number
 * @a: first number
 * @b: second number
 */
void print_to_98(int n)
{
if (n <= 98)
{
int i;
for (i = n; i <= 98; i++)
{
printf("%d ", i);
}
}
else
{
for (i = n; i >= 98; i--)
{
printf("%d ", i);
}
}
}
