#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * free_all - frees the memory
 * @string: pointer values being passed for freeing
 * @i: counter
 */
void free_all(char **string, int i)
{
for (; i > 0;)
free(string[--i]);
free(string);
}
/**
 * count - function to calculate number of words
 * @str: string being passed to check for words
 *
 * Return: number of words
 */
int count(char *str)
{
int a, num = 0;

for (a = 0; str[a] != '\0'; a++)
{
if (*str == ' ')
str++;
else
{
for (; str[a] != ' ' && str[a] != '\0'; a++)
str++;
num++;
}
}
return (num);
}
/**
 * strtow - function that splits string into words
 * @str: string being passed
 * Return: null if string is empty or null or function fails
 */
char **strtow(char *str)
{
int total = 0, b = 0, c = 0, length = 0;
char **words, *found_word;
if (str == 0 || *str == 0)
return (NULL);
total = count(str);
if (total == 0)
return (NULL);
words = malloc((total + 1) * sizeof(char *));
if (words == 0)
return (NULL);
for (; *str != '\0' &&  b < total;)
{
if (*str == ' ')
str++;
else
{
found_word = str;
for (; *str != ' ' && *str != '\0';)
{
length++;
str++;
}
words[b] = malloc((length + 1) * sizeof(char));
if (words[b] == 0)
{
free_all(words, b);
return (NULL);
}
while (*found_word != ' ' && *found_word != '\0')
{
words[b][c] = *found_word;
found_word++;
c++;
}
words[b][c] = '\0';
b++;
c = 0;
length = 0;
str++;
}}
return (words);
}
