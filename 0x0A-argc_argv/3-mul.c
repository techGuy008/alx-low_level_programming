#include <stdio.h>
#include "main.h"
/**
 * _atoi - converts a string to an integer
 * @str: string to be converted
 * Return: int result
 */
int _atoi(const char *str)
{
int i = 0;
int n = 0;
int sign = 1; 

if (str[i] == '-')
{
sign = -1; 
i++;
}

while (str[i] >= '0' && str[i] <= '9')
{
n = n * 10 + (str[i] - '0');
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
