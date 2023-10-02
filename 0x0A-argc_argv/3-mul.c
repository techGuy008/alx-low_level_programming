#include <stdio.h>
#include "main.h"
/**
 * stringToInt - convert string to integer
 * @str: string input
 * Return: result number
 */
int stringToInt(const char *str)
{
if (*str == '\0')
{
return (0);
}
int digit = *str - '0';
int partialResult = stringToInt(str + 1);

return (partialResult * 10 + digit);
}

/**
 * main - multiplies two numbers
 * @argc: argument counter
 * @argv: pointer to array of arguments
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
if (argc != 3)
{
printf("Error\n");
return (1);
}

int n1 = convertInt(argv[1]);
int n2 = convertInt(argv[2]);

int res = n1 * n2;

printf("%d\n", res);

return (0);
}