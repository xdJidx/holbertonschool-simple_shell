#include "hsh_main.h"

/**
 * tokenCommand - tokenize the line
 * @command: command to be tokenized
 *
 * Return: argv pointer
*/

char **tokenCommand(char *command)
{
	int token_size = 64;/*taille initiale allouée pour argv*/
	char *tokenCommand = NULL;
	char **argv = NULL;
	int index = 0;

	argv = malloc(token_size * sizeof(char *));
	/* allocation de la mémoire pour argv */

	if (argv == NULL)/*Vérifie si l'allocation de mémoire a réussi*/
	{
		/*Affiche un mess d'erreur et quitte le prog*/
		perror("Error : allocation memory");
		free(argv);
		free(command);
		exit(1);
	}
	tokenCommand = strtok(command, " ");

	while (tokenCommand != NULL)
	{
		argv[index] = tokenCommand;/* stocke le token dans le tableau argv */
		index++;
		tokenCommand = strtok(NULL, " ");
		/* passe au token suivant */
	}
	argv[index] = NULL;/* ajoute un élément NULL pr marquer la fin du tabl */

	return (argv);/* retourne un pointeur vers le tableau de tokens */
}
