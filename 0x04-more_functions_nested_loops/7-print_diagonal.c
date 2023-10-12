#include "main.h"
/**
 * print_line -	multiplies two integers.
 * @n: is the number of times the character	_ should be printed
 */
void print_diagonal(int n)
{
	int row;
	int column;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (row = 0; row < n; row++)
		{
			for (column = 0; column < row; column++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
