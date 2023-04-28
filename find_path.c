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
	char *path = _getenv("PATH");/*Get the value of the PATH env var*/
	char **ar = tokenEnv(path);/* Tokenize the PATH into an array of directories*/
	char *command_path = malloc(sizeof(char) * 64);

	if (command_path == NULL)
	{
		perror("Error : allocation memory");
		return (NULL);
	}
	for (index = 0; ar[index] != NULL; index++)
	{
		command_path[0] = 0;/*Set the first character of command_path to null*/
		strcat(command_path, ar[index]);/*Append the directory to command_path*/
		strcat(command_path, "/");/*Append a slash to command_path*/
		strcat(command_path, command); /*Append the command to command_path*/

		if (stat(command_path, &st) == 0)/*Check if the file exists in the dir*/
		{
			free(ar);/*Free the memory used by the array of directories*/
			return (command_path);/*Return the full path of the command*/
		}
	}
	free(command_path);/*Free the memory used by the full path of the command*/

	free(ar); /*Free the memory used by the array of directories*/
	return (NULL);/*Return NULL if the file is not found in any directory*/
}
