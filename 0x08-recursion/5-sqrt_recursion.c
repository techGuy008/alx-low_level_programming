#include <stdio.h>
/**
 * squareRoot -  returns the natural square root of a number
 * @num: number input
 * @guess: guess input
 * @epsilon: epsilon input
 * Return: result number
 */
int squareRoot(double num, double guess, double epsilon)
{
int newGuess = 0.5 * (guess + num / guess);

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
int _sqrt_recursion(int n)
{
if (n < 0)
{
return (-1);
}

return (squareRoot(n, 1.0, 0.000001));
}
