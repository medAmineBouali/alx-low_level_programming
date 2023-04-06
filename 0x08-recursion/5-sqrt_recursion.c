#include "main.h"
/**
 * call - help the _sqrt_recursion function to find the natural square
 * @x: input 1
 * @y: input 2
 *
 * Return: the natural square OR -1
 */
int call(int x, int y)
{
	if (x * x == y)
		return (x);
	else if (x * x > y)
		return (-1);
	else
		return (call(x + 1, y));
}

/**
 * _sqrt_recursion - calculates the natural square root of a number
 * @n: the input
 *
 * Return: -1 if n does not have a natural square root, otherwise the root
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	else if (n < 0)
		return (-1);
	else
		return (call(1, n));
}
