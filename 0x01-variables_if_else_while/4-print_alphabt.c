#include <stdio.h>

/**
 * main - Entry point
 *
 * Description - A program that print the letters of the
 * alphabet in lowercase except "e" and "q"
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alpha[24] = "abcdfghijklmnoprstuvwxyz";
	int i;

	for (i = 0; i < 24; i++)
	{
		putchar(alpha[i]);
	}
	putchar('\n');
	return (0);
}
