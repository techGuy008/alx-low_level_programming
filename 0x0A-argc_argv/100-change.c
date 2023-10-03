#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - prints the minimum number of coins to make the change
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
int num;
int res;
int coinArr[] = {25, 10, 5, 2, 1};

if (argc != 2)
{
printf("Error\n");
return (1);
}

res = 0;
num = atoi(argv[1]);

if (num < 0)
{
printf("0\n");
return (0);
}

for (int i = 0; i < 5 && num >= 0; i++)
{
while (num >= coinArr[i])
{
res++;
num -= coinArr[i];
}
}

printf("%d\n", res);
return (0);
}
