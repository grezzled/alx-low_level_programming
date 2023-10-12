#include "main.h"
/**
 * print_square	-	multiplies two integers.
 * @n: is the number of times the character	# should be printed
 */
void print_square(int size)
{
	int	row, column;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for	(row = 0; row <	size; row++)
		{
			for	(column	= 0; column	< size;	column++)
			{
				_putchar(35); // '#' character
			}
			_putchar('\n');
		}
	}
}
