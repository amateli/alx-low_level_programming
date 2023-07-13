#include <stdio.h>

/**
 * main - Entry point
 *
 * Description - A program that prints the letters of the alphabet
 * backwards in lowercase
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
	char alpha[] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 26; i >= 0; i--)
	{
		putchar(alpha[i]);
	}
	putchar('\n');
	return (0);
}
