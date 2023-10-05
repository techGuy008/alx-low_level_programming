#include "main.h"
#include <stdlib.h>
/**
 * argstostr - main entry
 * @ac: int input
 * @av: double pointer array
 *
 * Return: 0
 */
char *argstostr(int ac, char **av)
{
int j, n, r = 0, l = 0;
char *s;

if (ac == 0 || av == NULL)
return (NULL);

for (j = 0; j < ac; j++)
{
for (n = 0; av[j][n]; n++)
l++;
}
l += ac;

s = malloc(sizeof(char) * l + 1);
if (s == NULL)
return (NULL);
for (j = 0; j < ac; j++)
{
for (n = 0; av[j][n]; n++)
{
s[r] = av[j][n];
r++;
}
if (s[r] == '\0')
{
s[r++] = '\n';
}
}
return (s);
}
