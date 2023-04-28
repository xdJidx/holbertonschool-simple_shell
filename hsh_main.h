#ifndef HSH_MAIN_H
#define HSH_MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <fcntl.h>
#include <sys/types.h>
#include <errno.h>

#define MAX_COMMAND_SIZE 100

typedef struct builtin
{
    char *name;
    void (*func)(char **argv);
} builtin_t;


extern char **environ;
void _instructions(void);
char *_readCommand(void);
void _executeCommand(char **argv);
char *_strdup(char *str);
int _strlen(char *str);
int _strcmp(char *s1, char *s2);
char *_getenv(char *name);
char *_strchr(const char *str, int c);
char **tokenEnv(char *path);
char **tokenCommand(char *command);
char *findPath(char *command);
char *_strcat(char *dest, char *src);
void _exitShell(char **argv);
void _printHelp(char **argv);
void _changeDirectory(char **argv);
extern builtin_t builtins[];


#endif
