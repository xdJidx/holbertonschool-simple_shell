#include "hsh_main.h"

char* _readCommand()
 {
     char* command = NULL;
     size_t size = 0;
     ssize_t length;
     printf("$ ");
     length = getline(&command, &size, stdin);
     if (length == -1)
     {
         return (NULL);
     }
     command[length - 1] = '\0'; /* supprime le caractère '\n' ajouté par getline() */
     return (command);
}
