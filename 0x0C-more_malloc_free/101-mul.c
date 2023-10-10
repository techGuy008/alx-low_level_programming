#include "main.h"
#include <stdlib.h>
#include <stdio.h>

#define ERR_MSG "Error"
/**
 * _strlen - returns the length of a string
 * @str: string to print
 * Return: string length
 */

int _strlen(char *str)
{
if (*str == '\0')
{
return (0);
}
else
{
return (1 + _strlen(str + 1));
}
}

/**
 * is_digit - checks if a string contains a non-digit char
 * @s: string to be evaluated
 *
 * Return: 0 if a non-digit is found, 1 otherwise
 */
int is_digit(char *s)
{
int i;
i = 0;
while (s[i])
{
if (s[i] < '0' || s[i] > '9')
{
return (0);
}
i++;
}
return (1);
}
/**
 * errors - handles errors for main
 */
void errors(void)
{
printf("Error\n");
exit(98);
}
/**
 * main - multiplies two positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: always 0 (Success)
 */
int main(int argc, char *argv[])
{
if (argc != 3 || !is_digit(argv[1]) || !is_digit(argv[2]))
{
errors();
}
int len1, len2, len, *result, digit1, carry, j, digit2;
char *s1, *s2;
*s1 = argv[1];
*s2 = argv[2];
len1 = _strlen(s1);
len2 = _strlen(s2);
len = len1 + len2 + 1;
result = malloc(sizeof(int) * len);

if (!result)
{
return 1;
}
for (int i = 0; i <= len1 + len2; i++)
{
result[i] = 0;
}
for (int i = len1 - 1; i >= 0; i--)
{
digit1 = s1[i] - '0';
carry = 0;
for (j = len2 - 1; j >= 0; j--)
{
digit2 = s2[j] - '0';
carry += result[i + j + 1] + (digit1 * digit2);
result[i + j + 1] = carry % 10;
carry /= 10;
}
if (carry > 0)
{
result[i + len2 + 1] += carry;
}
}

int a = 0;
for (int i = 0; i < len - 1; i++)
{
if (result[i])
{
a = 1;
}
if (a)
{
putchar(result[i] + '0');
}
}
if (!a)
{
putchar('0');
}
putchar('\n');
free(result);
return 0;
}