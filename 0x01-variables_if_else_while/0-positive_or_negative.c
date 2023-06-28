#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Description - A program that that evaluates if a certain random number
 *  generated is positive, negative or equals to zero
 *
 *  Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n == 0)
		printf("%d is zero\n", n);
	else if (n > 0)
		printf("%d is positive", n);
	else
		printf("%d is negative", n);
	return (0);
}

