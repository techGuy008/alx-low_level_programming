#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * argstostr -  concatenates all the arguments
 * @ac: int input
 * @av: double pointer array
 *
 * Return: 0
 */

char *argstostr(int ac, char **av)
{
    int length;
    int i, j, k;
    char *result;
    if (ac == 0 || av == NULL)
    {
        return NULL;
    }

    length = 0;

    for (i = 0; i < ac; i++)
    {
        for (j = 0; av[i][j] != '\0'; j++)
        {
            length++;
        }
        length++;
    }

    result = malloc((length + 1) * sizeof(char));

    if (result == NULL)
    {
        return NULL;
    }

    for (i = 0; i < ac; i++)
    {
        for (j = 0; av[i][j] != '\0'; j++)
        {
            result[k++] = av[i][j];
        }
        result[k++] = '\n';
    }

    result[k] = '\0';

    return result;
}
