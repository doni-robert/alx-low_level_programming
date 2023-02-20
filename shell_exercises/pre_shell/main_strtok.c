#include "main.h"
/**
 * main - prints each word of a string
 *
 * Return: Always 0
 */
int main()
{
        char str[] = "The water broke!";
        char **word;
        int i = 0;

        word = _strtok(str);
        while(word[i])
        {
                printf("%s\n", word[i]);
                i++;
        }
	
	return (0);
}	
