#include "main.h"
/**
 * more_numbers - prints numbers from 0 to 14
 */

void more_numbers(void)
{
	int i, j, z;

	for (i = '0'; i <= '9'; i++)
	{
		for (j = '0'; j <= '9'; j++)
		{
			_putchar(j);
		}
		for (z = '0'; z <= '4'; z++)
		{
			_putchar('1');
			_putchar(z);
		}
		_putchar('\n');
	}
}

