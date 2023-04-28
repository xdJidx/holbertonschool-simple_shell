#include "hsh_main.h"

/**
 * _executeCommand - Execut the command of user
 * @argv: array of strings containing the user's command and arguments
 */

void _executeCommand(char **argv)
{
	char *command = argv[0];
	int i = 0;
	int isBuiltIn = 0;

	while (builtins[i].name != NULL)
	{
		if (strcmp(command, builtins[i].name) == 0)
		{
			builtins[i].func(argv);
			isBuiltIn = 1;
			break;
		}
		i++;
	}
	/*If the command is not built-in, look for it in the path and execute it*/
	if (!isBuiltIn)
	{
		/* If the command is not in the path, look for it */
		if (command[0] == '/' || command[0] == '.')
		{
			command = argv[0];
		}
		else
			command = findPath(argv[0]);

		/* If the command is still not found, print an error message */
		if (command == NULL)
		{
			free(command);
			perror("Error: no command found");
		}
		/* Execute the command */
		if (execve(command, argv, environ) == -1)
		{
			perror("Error: execve");
		}
	}
}
