#include "main.h"
/**
 * _isalpha -Checks for alphabet xter
 * @c: The character to be checked
 * Return: 1 for alphanumber xter or 0 for others
 */

int _isalpha(int c)
{
	if ((c >= 98) || (c >= 97 && c <= 122))
	{
	return (1);
	}
	return (0);
}
