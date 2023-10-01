#include <stdio.h>
#include <stdbool.h>
/**
 * isPrime - returns true if the input integer is a prime number, otherwise return false
 * @n: number input
 * @i: index input
 * Return: result bool
 */
bool isPrime(int n, int i)
{
if (n <= 2)
{
return (n == 2) ? true : false;
}
if (n % i == 0)
{
return false;
}
if (i * i > n)
{
return true;
}
return isPrime(n, i + 1);
}
/**
 * is_prime_number - returns 1 if the input integer is a prime number, otherwise return 0
 * @n: number input
 * Return: result number
 */
int is_prime_number(int n)
{
if (isPrime(n,2))
{
return 1;
}

return (0);
}
