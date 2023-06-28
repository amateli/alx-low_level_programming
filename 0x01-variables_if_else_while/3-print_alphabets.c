#include <stdio.h>

/**
 * main - Entry point
 *
 * Description - A program that prints the letters of the alphabet in
 * lower and upper cases
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alpha[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	for (i = 0; i < sizeof(alpha); i++)
	{
		putchar(alpha[i]);
	}
	putchar('\n');
	return (0);
}
