#include "hsh_main.h"



extern builtin_t builtin[];
/* Exit shell */
void _exitShell(__attribute__((unused))char **argv)
{

	exit(0);
}

/* Change directory */
void _changeDirectory(char **argv)
{
    if (argv[1] == NULL)
    {
        fprintf(stderr, "Expected argument to \"cd\"\n");
    }
    else if (chdir(argv[1]) != 0)
    {
        perror("cd");
    }
}
/* Print help message */
void _printHelp(char **argv)
{
	free(argv);
	printf("Usage: hsh [option]\n"
           "A simple shell for Unix systems.\n"
           "Options:\n"
           "  -h, --help\tPrint this help message and exit\n");
}
/* Array of built-in commands */
builtin_t builtins[] = {
    {"exit", _exitShell},
    {"cd", _changeDirectory},
    {"help", _printHelp},
    {NULL, NULL}
};
