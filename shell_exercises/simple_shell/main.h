#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>


char **_strtok(char *str);
char *get_command(void);
char **split(char *buffer);
int command_exec(char **arr);


#endif

