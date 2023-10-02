#include <stdio.h>
/**
 * main - prints all arguments it receives.
 * @argc: argument counter
 * @argv: pointer to array of arguments
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
for (int i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}

return 0;
}
