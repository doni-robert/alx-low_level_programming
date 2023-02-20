#include "main.h"

/**
 * main - prints the value of an enviromental variable
 *
 * Return; 0 if successful, -1 otherwise
 */
int main(int ac, char **av)
{
        char *value;
        const char *name;

        name = "PATH";

        value = _getenv(name);
        if (value == NULL)
                return (-1);

        printf("%s\n", value);
        return (0);
}

