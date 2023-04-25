#include "hsh_main.h"

/**
 * _strlen - Counts the number of characters in an array of characters
 * @str: string
 * Return: length of the array characters
 */

int _strlen(char *str)
{
	int length = 0;

	while (str[length] != '\0')
		length++;
	return (length);
}
