#include "hsh_main.h"

/**
 * _exitShell - Exit the Shell
 * @argv: array of char
 *
 */
void _exitShell(__attribute__((unused))char **argv)
{
	exit(0);
}

/**
 * _changeDirectory - Change directory
 * @argv: array of char
 *
 */
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
/**
 * _printHelp - Print help message
 * @argv: array of char
 */
void _printHelp(char **argv)
{
	free(argv);
	printf("Usage: hsh [option]\n");
	printf("A simple shell for Unix systems.\n");
	printf("Options:\n");
	printf("  -h, --help\tPrint this help message and exit\n");
}

/*Struct*/
builtin_t builtins[] = {
	{"exit", _exitShell},
	{"cd", _changeDirectory},
	{"help", _printHelp},
	{NULL, NULL}
	};
