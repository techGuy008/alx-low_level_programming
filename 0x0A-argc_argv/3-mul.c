#include <stdio.h>
#include <stdlib.h>
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

int n1 = atoi(argv[1]);
int n2 = atoi(argv[2]);

int res = n1 * n2;

printf("%d\n", res);

return (0);
}
