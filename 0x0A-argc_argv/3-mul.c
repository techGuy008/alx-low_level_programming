#include <stdio.h>
#include "main.h"
/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 * Return: int result
 */
int _atoi(const char *str)
{
int i = 0;
int n = 0;
int sign = 1; 

if (s[i] == '-')
{
sign = -1; 
i++;
}

while (s[i] >= '0' && s[i] <= '9')
{
n = n * 10 + (s[i] - '0');
i++;
}

return n * sign; 
}

/**
 * main - multiplies two numbers
 * @argc: argument counter
 * @argv: pointer to array of arguments
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
if (argc < 3 || argc > 3)
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
