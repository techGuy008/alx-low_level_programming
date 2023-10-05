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
char **strtow(char *str)
{
int count;
char *token;
if (str == NULL || str[0] == '\0')
{
return (NULL);
}

count = 0;
token = strtok(str, " ");

while (token != NULL)
{
count++;
token = strtok(NULL, " ");
}

char **words = (char **)malloc((count + 1) * sizeof(char *));

if (words == NULL)
{
return (NULL);
}

token = strtok(str, " ");
int i = 0;
while (token != NULL)
{
words[i] = strdup(token);
if (words[i] == NULL)
{

for (int j = 0; j < i; j++)
{
free(words[j]);
}
free(words);
return (NULL);
}
i++;
token = strtok(NULL, " ");
}

words[i] = NULL;

return (words);
}