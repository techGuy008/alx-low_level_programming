#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - adds positive numbers
 * @argc: argument counter
 * @argv: pointer to array of arguments
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
    if (argc < 2)
    {
        printf("0\n");
        return 0;
    }

    int sumVal = 0;

    for (int i = 1; i < argc; i++)
    {
        char *arg = argv[i];

        // Check if the argument contains only digits.
        for (int j = 0; arg[j] != '\0'; j++)
        {
            if (!isdigit(arg[j]))
            {
                printf("Error\n");
                return 1;
            }
        }

        // Convert the argument to an integer and add it to the sumVal.
        int n = atoi(arg);
        sumVal += n;
    }

    printf("%d\n", sumVal);

    return 0;
}
