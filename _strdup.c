#include "hsh_main.h"

/**
 * _strdup - Create copy of string with malloc
 * @str: chaine de caractère
 * Return: la copie
 */

char *_strdup(char *str)
{
	char *copy;
	int index, len = 0;

	if (str == NULL)
		return (NULL);

	for (index = 0; str[index]; index++)
		len++;

	copy = malloc(sizeof(char) * (len + 1));

	if (copy == NULL)
		return (NULL);

	for (index = 0; str[index]; index++)
		copy[index] = str[index];

	copy[len] = '\0';
	return (copy);
}
