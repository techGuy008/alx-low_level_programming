#include <stdio.h>
#include "main.h"
/**
 * main - prints the number of arguments passed
 * @argc: argument counter
 * @argv: pointer to array of arguments
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
if (argc > 0 && argv[0] != NULL)
{
printf("%s\n", argv[0]);
}
else
{
printf("\n");
}

return (0);
}
