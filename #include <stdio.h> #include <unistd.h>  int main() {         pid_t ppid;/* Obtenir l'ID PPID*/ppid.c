#include <stdio.h>
#include <unistd.h>

int main()
{
        pid_t ppid;

   /* Obtenir l'ID PPID*/
        ppid = getppid();

        printf("ID du processus parent (PPID) : %d\n", ppid);

        return (0);
}
