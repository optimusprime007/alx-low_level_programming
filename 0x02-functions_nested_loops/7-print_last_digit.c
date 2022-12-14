#include "main.h"

/**
 * Prinyts last digit
 * @n: Number treated
 * Return: Value of last numberdigit
 */

int print_last_digit(int n)
{
	int last;

	last = n % 10;
	if (last < 0)
	{
	last = last * -1;
	}
	_putchar(last + '0');
	return (last);
}
