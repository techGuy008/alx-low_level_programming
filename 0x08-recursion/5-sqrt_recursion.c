#include <stdio.h>
/**
 * _sqrt_recursion -  returns the natural square root of a number
 * @n: number input
 * Return: result number
 */
double sqrt_recursive(double num, double guess, double epsilon) {
double guess_squared = guess * guess;
    
if (fabs(guess_squared - num) < epsilon) {
return guess;
}
else
{
double new_guess = (guess + num / guess) / 2.0;
return sqrt_recursive(num, new_guess, epsilon);
}
}
double _sqrt_recursion(int n)
{
if (n < 0)
{
return (-1);
}

return sqrt_recursive(n, 1.0, 0.000001);
}
