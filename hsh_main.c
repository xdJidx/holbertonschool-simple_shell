#include "hsh_main.h"

int main()
{
     char* command = NULL;
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
         pid_t pid = fork();
         if (pid == -1)
         {
             perror("Erreur lors de la création d'un nouveau processus");
         }
         else if (pid == 0)
         {
             /* Code exécuté dans le processus enfant */
             _executeCommand(command);
             exit(EXIT_SUCCESS);
         }
         else
         {
             /* Code exécuté dans le processus parent */
             int status;
             waitpid(pid, &status, 0);
         }
         free(command);
     }
     return (0);
}
