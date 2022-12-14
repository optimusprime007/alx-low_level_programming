
#include "main.h"

/**
 * Print_sign - Prints sign
 * @n: The number checked
 * Return: 1 for + number and -1 for - number
 */

int print_sign(int n)
{
	if (n > 0)
	{
	_putchar(43);
	return (1);
	}
	else if (n < 0)
	{
	_putchar(45);
	return (-1);
	}
	else
	{
	_putchar(48);
	return (0);
	}
}
  
