#include <stdio.h>

/**
 * _strlen- Returns the lenght of string
 * @str: To get the lenght of str
 * Return: The lenght of @str
 */

size_t _strlen(const char *str)
{
	size_t length = 0;
	while (*str++)
	length++;
	return (length);
}
