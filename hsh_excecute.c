#include "hsh_main.h"

/**
 * _executeCommand - Execut the command of user
 * @command: string of user use
 *
 */

void _executeCommand(char **argv)
{
	char *command = argv[0];
	int status;

	if (command[0] == '/' || command[0] == '.')
	{
		command = argv[0];	
	}
	else
		command = find_path(args[0]);

	if (command == NULL)
		{
			free(command);
			perror("Error: no command");
			return (0);
		}

	if (execve(command, args, environ) == -1)
		{
			perror("Error: execve");
			return (0);
		}
}
