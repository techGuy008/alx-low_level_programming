#include <stdio.h>
/**
 * squareRoot -  returns the natural square root of a number
 * @num: number input
 * @guess: guess input
 * @epsilon: epsilon input
 * Return: result number
 */
double squareRoot(double num, double guess, double epsilon)
{
double newGuess = 0.5 * (guess + num / guess);

if ((guess - newGuess < epsilon) && (newGuess - guess < epsilon))
{
return (newGuess);
}
else
{
return (squareRoot(num, newGuess, epsilon));
}
}
/**
 * _sqrt_recursion -  returns the natural square root of a number
 * @n: number input
 * Return: result number
 */
double _sqrt_recursion(int n)
{
if (n < 0)
{
return (-1);
}
double result = (squareRoot(n, 1.0, 0.000001));
return (result);
}
