#include <stdio.h>
#include <stdlib.h>

/**
 * _getline - Puts input into buffer line
 *
 * Return: buffer with user input
 */
int main(void)
{
        char *line = NULL;
        ssize_t read;
        size_t len = 0;

        printf("$ ");
        read = getline(&line, &len, stdin);

        if (read != -1)
        {
                perror("getline");
                exit(EXIT_FAILURE);
        }
        printf("%s", line);

        free(line);
        exit(EXIT_SUCCESS);
}
