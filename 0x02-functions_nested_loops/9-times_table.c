#include "main.h"

/**
 * times_table - a function that prints the 9 times table, starting with 0.
 * Return: prints the 9 times table.
 */

void times_table(void)
{
	int x, y, z, t, u;

	for (x = 0; x <= 9; x++)
	{
		for (y = 0; y <= 9; y++)
		{
			z = x * y;
			if (z > 9)
			{
				u = z % 10;
				t = (z - u) / 10;
				_putchar(',');
				_putchar(' ');
				_putchar(t + '0');
				_putchar(u + '0');
			}
			else
			{
				if (y != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
				_putchar(z + '0');
			}
		}
		_putchar('\n');
	}
}
