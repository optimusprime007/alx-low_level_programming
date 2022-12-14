#include "main.h"

/**
 * _abs - Absolute value
 * @c: Number
 * Return: Absolute Number or 0
 */

int _abs(int c)
{
	if (c < 0)
	{
	int abs_val;

	abs_val = c * -1;
	return (abs_val);
	}
	return (c);


}
