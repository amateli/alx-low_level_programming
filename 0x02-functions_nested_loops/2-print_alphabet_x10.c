#include "main.h"

/**
 * print_alphabet_x10 - a function that prints 10
 * times the alphabet, in lowercase, followed
 * by a new line.
 *
 * Return: 0
 */

void print_alphabet_x10(void)
{
	int i;

	for (i = 1; i <= 10; i++)
	{
		char l;

		for (l = 'a'; l <= 'z'; l++)
		{
			_putchar(l);
		}
		_putchar('\n');
	}
}
