#include "hsh_main.h"

/**
 * _executeCommand - Execut the command of user
 * @command: string of user use
 *
 */

void _executeCommand(char **argv)
{
	char *command = argv[0];

	if (command[0] == '/' || command[0] == '.')
	{
		command = argv[0];	
	}
	else
		command = findPath(argv[0]);

	if (command == NULL)
		{
			free(command);
			perror("Error: no command found");
		}

	if (execve(command, argv, environ) == -1)
		{
			perror("Error: execve");
		}
}
