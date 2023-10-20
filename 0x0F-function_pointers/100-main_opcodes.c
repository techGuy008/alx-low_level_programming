#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Description: A program that prints the opcodes
 * of its own main function.
 * @argc: argument counter
 * @argv: argument vector
 * Return: Always Successful
 */

int main(int argc, char *argv[])
{
int index, nbytes;
char *pointer = (char *)main;

if (argc != 2)
{
printf("Error\n");
exit(1);
}

nbytes = atoi(argv[1]);
if (nbytes < 0)
{
printf("Error\n");
exit(2);
}

for (index = 0; index < nbytes; index++)
{
printf("%02x", pointer[index] & 0xFF);
if (index != nbytes - 1)
{
printf(" ");
}
}
printf("\n");
return (0);
}