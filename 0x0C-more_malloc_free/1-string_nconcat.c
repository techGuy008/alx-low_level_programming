#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - concatenates n bytes of a string to another string
 * @s1: string to append to
 * @s2: string to concatenate from
 * @n: number of bytes from s2 to concatenate to s1
 * Return: pointer to the resulting string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{

unsigned int len1, len2;
unsigned int newSize;
unsigned int i;
char *result;

len1 = 0;
len2 = 0;
while (s1 && s1[len1])
{
len1++;
}
while (s2 && s2[len2])
{
len2++;
}

newSize = len1 + (n < len2 ? n : len2);

result = malloc(newSize + 1);
if (!result)
{
return (NULL);
}
for (i = 0; i < len1; i++)
{
result[i] = s1[i];
}
for (i = 0; i < n && i < len2; i++)
{
result[len1 + i] = s2[i];
}
result[newSize] = '\0';

return (result);
}
