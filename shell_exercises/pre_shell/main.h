#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
extern char **environ;

/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
    char *str;
    struct list_s *next;
} list_t;

int list_dir();
list_t *add_node_end(list_t **head, const char *str);
int print_dir();
char *_getenv(const char *name);
char **_strtok(char *str);


#endif

