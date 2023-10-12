#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - a function that print numbers, followed by a new line.
 * @separator: pointer to constant separator
 * @n: start of input variables
 * Return: nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list ap;
unsigned int i;
va_start(ap, n);

for (i = 0; i < n; i++)
{
printf("%d", va_arg(ap, int));
if (separator && i != n - 1)
{
printf("%s", separator);
}
}
va_end(ap);
printf("\n");
}
