#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>


typedef struct builtin
{
        char *cmd;
        int (*f)(char **array);
} builtin_t;

char **_strtok(char *str, char *delim);
char *get_command(void);
char **split(char *buffer);
int command_exec(char **arr);
char *search(char *command);
int (*search_builtin(char *name))(char **array);
int exit_sh(__attribute__((unused)) char **array);



#endif

