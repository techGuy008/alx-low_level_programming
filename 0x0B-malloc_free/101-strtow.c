#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void free_all(char **string, int i)
{
for (; i > 0;)
free(string[--i]);
free(string);
}

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

char **strtow(char *str)
{
int total,b,length,c; 
char **words, *found_word;
if (!str || !*str)
return NULL;
 total = count(str);
if (total == 0)
return NULL;
 words = malloc((total + 1) * sizeof(char *));
if (!words)
return NULL;
 b = 0;
while (*str)
{
while (*str && *str == ' ')
str++;
if (*str && *str != ' ')
{
 *found_word = str;
 length = 0;
while (*str && *str != ' ')
{
length++;
str++;
}
words[b] = malloc((length + 1) * sizeof(char));
if (!words[b])
{
free_all(words, b);
return NULL;
}
 c = 0;
while (*found_word && *found_word != ' ')
{
words[b][c] = *found_word;
found_word++;
c++;
}
words[b][c] = '\0';
b++;
}
}
words[b] = NULL;
return words;
}
