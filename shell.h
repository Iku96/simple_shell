#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>

void show_prompt(void);
void iprint(const char *characters);
void readCommand(char *command, size_t size);
void exeCommand(const char *command);

#endif /* SHELL_H */

