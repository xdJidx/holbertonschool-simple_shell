#include <string.h>
#include <stdio.h>
#include <stdlib.h>

void strarray(char *delim, char *token, char array[][256])
{
    int i = 0;
    while (token)
    {
        strcpy(array[i], token);
        i++;
        token = strtok(NULL, delim);
    }
}

int main()
{
    char str[] = "sam is a girl";
    char *delim = " ";
    char *token;
    char array[10][256]; // Tableau de chaînes de caractères de taille maximale 256
    int i;

    token = strtok(str, delim);
    strarray(delim, token, array);

    for (i = 0; i < 10 && array[i][0] != '\0'; i++)
    {
        printf("Mot : %s\n", array[i]);
    }

    return 0;
}

