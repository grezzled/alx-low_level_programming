#include <stdio.h>
/**
 * add - count to 98
 * @n: starting number
 */
void print_to_98(int n)
{
int i;
if (n <= 98)
{
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
