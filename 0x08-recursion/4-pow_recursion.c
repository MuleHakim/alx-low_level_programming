#include "main.h"

/**
 * _pow_recursion - Returns the value of x power of y.
 * @x: The base integer.
 * @y: The exponent.
 *
 * Return: The vakue of x power of y.
 *	   -1 if y is less than 0.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	x *= _pow_recursion(x, y - 1);

	return (x);
}
