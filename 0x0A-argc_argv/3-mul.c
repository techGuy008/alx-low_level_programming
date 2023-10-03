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

for (int i = 0; str[i] != '\0'; i++)
{
if (str[i] >= '0' && str[i] <= '9')
{
res = res * 10 + (str[i] - '0');
}
else
{
return -1;
}
}

return res;
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
