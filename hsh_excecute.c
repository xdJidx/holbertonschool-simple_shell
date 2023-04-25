#include "hsh_main.h"

/**
 * _executeCommand - Execut the command of user
 * @command: string of user
 *
 */

void _executeCommand(char *command)
{
	char *args[100];
	int index = 0;
	char *path, *path_copy, *dir;

	args[index] = strtok(command, " ");
	while (args[index] != NULL)
	{
		index++;
		args[index] = strtok(NULL, " ");
	}
	args[index] = NULL; /* Use to execve() */

	path = getenv("PATH");
	path_copy = _strdup(path); /* Use for strtok() */

	dir = strtok(path_copy, ":");

	while (dir != NULL)
	{
		char command_path[MAX_COMMAND_SIZE];

		execve(command_path, args, NULL);
		dir = strtok(NULL, ":");
	}

	printf("hsh: %s: command not found.\n", command);
	free(path_copy);
}
