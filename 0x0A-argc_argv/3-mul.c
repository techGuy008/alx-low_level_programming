#include <stdio.h>
#include <stdlib.h>
/**
 * convertInt - convert string to integer
 * @str: string input
 * Return: result number
 */
int convertInt(char str[])
{
int num = 0;
for (int i = 0; str[i] != '\0'; i++)
{
if (str[i] >= '0' && str[i] <= '9')
{
num = num * 10 + (str[i] - '0');
}
else
{
printf("Error\n");
return 1;
}
}
return num;
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