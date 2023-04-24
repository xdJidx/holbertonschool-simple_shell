#include "hsh_main.h"

void _executeCommand(char* command)
{
     char* args[100];
     int index = 0;
     args[index] = strtok(command, " ");
     while (args[index] != NULL)
     {
         index++;
         args[index] = strtok(NULL, " ");
     }
     args[index] = NULL; /* Nécessaire pour execve() */
     char* path = getenv("PATH");
     char* path_copy = strdup(path); /* Nécessaire car strtok() modifie la chaîne originale */
     char* dir = strtok(path_copy, ":");
     while (dir != NULL)
     {
         char command_path[MAX_COMMAND_SIZE];
         snprintf(command_path, MAX_COMMAND_SIZE, "%s/%s", dir, args[0]);
         execve(command_path, args, NULL);
         dir = strtok(NULL, ":");
     }
     printf("Commande inconnue.\n");
     free(path_copy);
}
