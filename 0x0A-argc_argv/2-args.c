#include <stdio.h>
/**
 * printArgs - prints all arguments it receives.
 * @argc: argument counter
 * @argv: pointer to array of arguments
 */
void printArgs(int argc, char *argv[])
{
if (argc > 0)
{
printf("%s\n", argv[0]);
printArgs(argc - 1, argv + 1);
}
}
/**
 * main - prints all arguments it receives.
 * @argc: argument counter
 * @argv: pointer to array of arguments
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
printArgs(argc, argv);

return 0;
}
