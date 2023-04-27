#include "hsh_main.h"

/**
 * _executeCommand - Execut the command of user
 * @command: string of user use
 *
 */

void _executeCommand(char *command)
{
	char *path = _getenv("PATH");
	char *dir = strtok(path, ":");
	char *executable = malloc(strlen(dir) + strlen(command) + 2);
	char *args[100];
	int index = 0;

	args[index] = strtok(command, " ");
	while (args[index] != NULL)
	{
		index++;
		args[index] = strtok(NULL, " ");
	}
	args[index] = NULL; /* Use to execve() */

	while (dir != NULL)
	{
		sprintf(executable, "%s/%s", dir, command);
		if (access(executable, X_OK) == 0)
		{
			execve(executable, args, NULL);

			if (execve(executable, args, NULL) == -1)
			{
				perror("Error executing command");
				exit(EXIT_FAILURE);
			}
		}
		dir = strtok(NULL, ":");
	}
	free(executable);
	fprintf(stderr, "Command not found: %s\n", command);
	exit(EXIT_FAILURE);
}
