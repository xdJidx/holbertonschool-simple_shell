#include "hsh_main.h"

/**
 * _getenv - Function that gets the value of the environmental variable.
 * @name: Name of the environmental variable.
 * Return: The value of the environmental variable or NULL if the variable is
 * not found.
 */
char *_getenv(char *name)
{
	int i;
	char **environ;
	char *path;

	environ = malloc(sizeof(char *));
/*Loop through each environment variable*/
	for (i = 0; environ[i]; i++)
	{
		/*Loop through each environment variable*/
		if (_strcmp(environ[i], name) == 0)
		{
			/*Extract the path by skipping the name and '='*/
			path = environ[i] + _strlen(name) + 1;
			return (path);
		}
	}
	free(environ);
	return (NULL);

}
