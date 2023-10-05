#include "main.h"
#include <stdlib.h>
/**
 * argstostr -  concatenates all the arguments
 * @ac: int input
 * @av: double pointer array
 *
 * Return: 0
 */

char *argstostr(int ac, char **av)
{
    int total;
    int i;
    char *result;
    if (ac == 0 || av == NULL)
    {
        return NULL;
    }

    total = 0;

    for (i = 0; i < ac; i++)
    {
        total += strlen(av[i]) + 1;
    }

    *result = (char *)malloc(total + 1);

    if (result == NULL)
    {
        return NULL;
    }

    int pos = 0;

    for (int i = 0; i < ac; i++)
    {
        strcpy(result + pos, av[i]);
        pos += strlen(av[i]);
        result[pos++] = '\n';
    }

    result[pos] = '\0';

    return result;
}
