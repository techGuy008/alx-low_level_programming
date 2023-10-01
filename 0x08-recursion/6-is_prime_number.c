#include <stdio.h>
#include <stdbool.h>
/**
 * isPrime - returns true if the input integer is a prime number
 * @n: number input
 * @i: index input
 * Return: result bool
 */
bool isPrime(int n, int i)
{
if (n < 2 || n % i == 0)
{
return  (false);
}
if (i * i > n || n == 2)
{
return (true);
}
return isPrime(n, i + 1);
}
/**
 * is_prime_number - returns 1 if the input is a prime number, else return 0
 * @n: number input
 * Return: result number
 */
int is_prime_number(int n)
{
if (isPrime(n,2))
{
return (1);
}

return (0);
}
