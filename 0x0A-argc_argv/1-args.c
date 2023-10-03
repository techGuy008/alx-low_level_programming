#include <stdio.h>
#include "main.h"
/**
 * main - prints the number of arguments passed
 * @argc: argument counter
 * @argv: pointer to array of arguments
 * Return: 0 on success
 */
int main(int argc, char *argv[]  __attribute__((unused)))
{
if (argc > 0)
{
printf("%d", argc);
}
printf("\n");
return (0);
}
