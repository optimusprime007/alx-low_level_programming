#include <stdio.h>

/**
 * swap_int - Swaps value of two int
 * @a: First int
 * @b: Second int
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
