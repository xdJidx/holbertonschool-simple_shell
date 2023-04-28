#include "hsh_main.h"

/**
 * findPath - function that checks if the file is in the path.
 *
 * @command: commands entered by the user
 *
 * Return: returns the full path if the file is found in the path
 * otherwise, it returns the same command entered by the user
 */

char *findPath(char *command)
{
	struct stat st;
	int index;
	char *path = _getenv("PATH");
	char **ar = tokenEnv(path);
	char *command_path = malloc(sizeof(char) * 64);

	if (command_path == NULL)
	{
		perror("Error : allocation memory");
		return (NULL);
	}
	for (index = 0; ar[index] != NULL; index++)
	{
		command_path[0] = 0;
		strcat(command_path, ar[index]);
		strcat(command_path, "/");
		strcat(command_path, command);

		if (stat(command_path, &st) == 0)
		{
			free(ar);
			return (command_path);
		}
	}
	free(command_path);
	free(ar);
	return (NULL);
}
