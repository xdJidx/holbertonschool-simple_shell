#include "hsh_main.h"

/**
 * main - Loops for simple shell
 * Return: 0 if sucess
 */

int main(void)
{
	char *command = NULL;
	int status;
	pid_t pid;
	char **argv;

	_instructions();
	while (1)
	{
		command = _readCommand();/* Read command from user input */
		if (command == NULL)/* If command is NULL, exit program */
		{
			printf("\n");
			exit(EXIT_SUCCESS);
		}
		if (_strcmp(command, "exit") == 0) /* Quit the shell */
		{
			free(command);
			exit(EXIT_SUCCESS);
		}
		pid = fork();/* Create child process to execute command */
		if (pid == -1)
		{
			perror("Erreur lors de la création d'un nouveau processus");
		}
		else if (pid == 0)
		{
			/* Code executed on child process: execute command */
			argv = tokenCommand(command);
			_executeCommand(argv);
			exit(EXIT_SUCCESS);
		}
		else
		{
			/* Code executed on parent process: wait for child to complete */
			waitpid(pid, &status, 0);
		}
		free(command);
	}
	return (0);
}
