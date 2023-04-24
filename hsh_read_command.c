#include "hsh_main.h"

/**
 * _readCommand - read this command
 * Return: command
 */

char  *_readCommand(void)
{
	char *command = NULL;
	size_t size = 0;
	ssize_t length;

	printf("$ ");
	length = getline(&command, &size, stdin);
	if (length == -1)
	{
	return (NULL);
	}
	command[length - 1] = '\0';
	/* add the character '\n' add by getline() */
	return (command);
}
