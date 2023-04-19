#include <stdio.h>

int main(int argc, char **argv, char **env) {
    printf("L'adresse de la variable 'env' est : %p\n", (void *)env);
    return 0;
}
