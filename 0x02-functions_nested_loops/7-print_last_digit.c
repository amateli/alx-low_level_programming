#include "main.h"

/**
 * print_last_digit - a function that prints the last digit of a number.
 * @n: The number to be checked
 * Return: The last digit of the number checked
 */

int print_last_digit(int n)
{
	int m;

	if (n < 0)
		n = -n;

	m = n % 10;
	if (m < 0)
		m = -m;

	_putchar(m + '0');
	return (m);
}
