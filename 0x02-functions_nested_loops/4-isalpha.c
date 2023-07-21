#include "main.h"

/**
 * _isalpha - A function that checks for alphabetic character
 *
 * @c: the character to be checked
 *
 * Return: 1 if the character is alphabetic, otherwise 0
 */

int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	else
		return (0);
}
