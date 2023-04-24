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

void _instructions();
char* _readCommand();
void _executeCommand(char* command);

#endif
