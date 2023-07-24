#include "main.h"

/**
 * jack_bauer - a function that prints every minute of the
 * day of Jack Bauer, starting from 00:00 to 23:59
 * Return: every minute of the day of Jack Bauer,
 * starting from 00:00 to 23:59
 */

void jack_bauer(void)
{
	int hour, mins;

	for (hour = 0; hour < 24; hour++)
	{
		for (mins = 0; mins < 60; mins++)
		{
			_putchar(hour/10);
			_putchar(hour%10);
			_putchar(':');
			_putchar(mins/10);
			_putchar(mins%10);
			_putchar('\n');
		}
	}
}
