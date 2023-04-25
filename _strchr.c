#include "hsh_main.h"

/**
 * _strchr - Search for the first occurrence of a given character in a string.
 * @str: String to browse
 * @c: Character to search
 *
 * Return: NULL if not found else return char* str
 */


char *_strchr(const char *str, int c)
{
	while (*str != '\0')
	{
		if (*str == c)
		{
			return ((char *) str);
		}
		str++;
	}
	return (NULL);
}
