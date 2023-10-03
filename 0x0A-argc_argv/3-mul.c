#include <stdio.h>
#include "main.h"
/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 * Return: int result
 */
int _atoi(const char *str)
{
int res = 0;
int sign = 1;
while (*str == ' ' || *str == '\t')
{
str++;
}

if (*str == '-')
{
sign = -1;
str++;
}
else if (*str == '+')
{
str++;
}

while (*str >= '0' && *str <= '9')
{
res = res * 10 + (*str - '0');
str++;
}

return res * sign;
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

int n1 = _atoi(argv[1]);
int n2 = _atoi(argv[2]);

int res = n1 * n2;

printf("%d\n", res);

return (0);
}
