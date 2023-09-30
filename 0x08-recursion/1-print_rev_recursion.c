#include <stdio.h>
/**
 * _print_rev_recursion - prints a string in reverse
 * @str: string to print
 */

void _print_rev_recursion(char *str)
{
if (*str)
{
_print_rev_recursion(str + 1);
printf("%c", *str);
}
}
