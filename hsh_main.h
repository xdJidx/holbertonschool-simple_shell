#ifndef HSH_MAIN_H
#define HSH_MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <fcntl.h>

#define MAX_COMMAND_SIZE 100

void _instructions(void);
char *_readCommand(void);
void _executeCommand(char *command);
char *_strdup(char *str);

#endif
