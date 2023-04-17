#include <stdio.h>
#include <unistd.h>

int main() 
{
    Obtenir l'ID du processus parent (PPID)
    pid_t ppid = getppid();

    printf("ID du processus parent (PPID) : %d\n", ppid);

    return 0;
}

