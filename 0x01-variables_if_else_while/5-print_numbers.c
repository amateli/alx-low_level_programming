#include <stdio.h>

/**
 * main - Entry point
 *
 * Description - Printing the digits of base 10 starting from 0
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
	char num;

	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);
	}
	putchar('\n');
	return (0);
}
