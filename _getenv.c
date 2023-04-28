#include "hsh_main.h"

/**
 * _getenv - function that gets the path
 * @command: command entered by the user
 *
 * Return: NULL.
 */

char *_getenv(char *command)
{
	int index, size;
	char **env = environ;

	size = strlen(command);/* calculer la taille de la commande */
	/* parcourir la liste d'environnement jusqu'à sa fin */
	for (index = 0; env[index]; index++)
	{
	/* comparer les premiers caractères de la commande avec chaque var d'env */
		if (strncmp(env[index], command, size) == 0)
			/* si la commande correspond à une var d'env,*/
			/* return la valeur de la var d'env sans le nom de la commande */
			return (env[index] + size + 1);
	}
	/* Retourne NULL si la variable d'environnement n'a pas été trouvée */
	return (NULL);
}

