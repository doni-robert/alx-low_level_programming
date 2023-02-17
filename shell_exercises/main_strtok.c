#include "main.h"
/**
 * main - prints each word of a string
 *
 * Return: Always 0
 */
int main()
{
        char str[] = "The water broke!";
        char **sub;
        int i = 0;

        sub = _strtok(str);
        while(sub[i])
        {
                printf("%s\n", sub[i]);
                i++;
        }
	
	return (0);
}	
