#include "main.h"

/**
 * print_times_table - a function that prints
 * n times table starting with 0.
 *
 * @n: The times tablet to print.
 *
 * Return: Prints the times table
 */

void print_times_table(int n)
{
	int i, j, product;

	if ((n > 0) && (n <= 15))
	{
		for (i = 0; i <= n; i++)
		{
			_putchar('0');
			for (j = 1; j <= n; j++)
			{
				_putchar(',');
				_putchar(' ');

				product = i * j;
				if (product <= 9)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(product + '0');
				}
				else if ((product >= 10) && (product <= 99))
				{
					_putchar(' ');
					_putchar((product / 10) + '0');
					_putchar((product % 10) + '0');
				}
				else
				{
					_putchar((product / 100) + '0');
					_putchar(((product / 10) % 10) + '0');
					_putchar((product % 10) + '0');
				}
			}
			_putchar('\n');
		}
	}
}
