#include "main.h"

/**
 * _islower - a function that checks for lowercase character
 *
 * @c: is the char to be checked
 *
 * Return: 1 if char is lowercase, otherwise 0
 */

int _islower(int c)
{
	int check;

	if (c >= 'a' && c <= 'z')
	{
		check = 1;
	}
	else
	{
		check = 0;
	}
	return (check);
}
