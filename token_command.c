#include "hsh_main.h"

/**
 * tokenize - tokenize the line
 * @line: line to be tokenized
 *
 * Return: argv pointer
*/

char **tokenCommand(char *command)
{
        int token_size = 64;/*taille initiale allouée pour argv*/
        char *tokenCommand = NULL;
        char **argv = NULL;
        int index = 0;

        argv = malloc(token_size * sizeof(char *));/* allocation de la mémoire pour argv */

        if (argv == NULL)/*Vérifie si l'allocation de mémoire a réussi*/
        {
                perror("Error : allocation memory");/*Affiche un mess d'erreur et quitte le programmm
e*/
                free(argv);
                free(command);
                exit(1);
        }
        tokenCommand = strtok(command, " ");

        while (tokenCommand != NULL)
        {
                argv[index] = tokenCommand;/* stocke le token dans le tableau argv */
                index++;
                tokenCommand = strtok(NULL, " ");/* passe au token suivant */
        }
        argv[index] = NULL;/* ajoute un élément NULL pour marquer la fin du tableau */

        return (argv);/* retourne un pointeur vers le tableau de tokens */
}

