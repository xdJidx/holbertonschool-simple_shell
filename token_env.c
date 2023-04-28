#include "hsh_main.h"

/**
 * tokenEnv - function that tokenizes the path
 * @path: path to be tokenize
 *
 * Return: Path in token argv
*/

char **tokenEnv(char *path)
{
	int path_size = 1024;
	char *token = NULL;
	char **argv = NULL;
	int index = 0;

	argv = malloc(path_size * sizeof(char *));

		if (argv == NULL)/* Check if memory allocation failed*/
		{
			perror("Error : allocation memory");
			return (0);
		}

		token = strtok(path, ":");/*Tokenize the path using ":" as a delimiter*/

		while (token != NULL)
		{
			argv[index] = token;/*Add the directory to the argv array*/
			index++;
			token = strtok(NULL, ":");/*Get the next token*/
		}
		argv[index] = NULL;/*Get the next token*/

	return (argv);
}
