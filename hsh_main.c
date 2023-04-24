#include "hsh_main.h"

/**
 * main - Loops for simple shell
 * Return: 0 if sucess
 *
 */

int main(void)
{
	char *command = NULL;
	int status;
	pid_t pid;

	_instructions();

	while (1)
	{
		command = _readCommand();

		if (command == NULL)
		{
			printf("\n");
			exit(EXIT_SUCCESS);
		}

		if (strcmp(command, "exit") == 0)
		{
			exit(EXIT_SUCCESS);
		}

		pid = fork();

		if (pid == -1)
		{
			perror("Erreur lors de la création d'un nouveau processus");
		}
		else if (pid == 0)
		{
			/* Code executed on child process */
			_executeCommand(command);
			exit(EXIT_SUCCESS);
		}
		else
		{
			/* Code executed on parent process */
			waitpid(pid, &status, 0);
		}
		free(command);
	}
	return (0);
}
