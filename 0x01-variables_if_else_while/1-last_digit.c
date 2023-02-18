Skip to content
Search or jump to…
Pull requests
Issues
Codespaces
Marketplace
Explore
 
@techGuy008 
Irenimoyan2
/
alx-low_level_programming
Public
Fork your own copy of Irenimoyan2/alx-low_level_programming
Code
Issues
Pull requests
Actions
Projects
Security
Insights
alx-low_level_programming/0x01-variables_if_else_while/1-last_digit.c

Irenimoyan2 1-last_digit.c
Latest commit 21ec88e 11 hours ago
 History
 0 contributors
Executable File  33 lines (27 sloc)  414 Bytes

#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main - Entry point
 *Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	printf("Last digit of %i is %i and is ", n, n % 10);

    if (n % 10 > 5)
	{
        printf("greater than 5\n");
	}
	else if (n % 10 == 0)
	{
		printf("0\n");
	}
	else
	{
		printf("less than 6 and not 0\n");
	}

	return (0);
}

