#include <stdio.h>
#include <stdlib.h>

extern char **environ;

int main() {
    printf("L'adresse de la variable globale 'environ' est : %p\n", (void *)environ);
    return 0;
}
