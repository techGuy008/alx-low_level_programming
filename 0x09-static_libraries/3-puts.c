#include "main.h"
#include <stdio.h>
/**
 * _puts - entry point
 * Description:  prints a string, followed by a new line, to stdout.
 * @str: declared variable
 * Return: void
 */
void _puts(char *str)
{
	int a = 0;

	while (str[a] != '\0')
	{
		putchar(str[a]);
		a++;
	}
	putchar('\n');
}
