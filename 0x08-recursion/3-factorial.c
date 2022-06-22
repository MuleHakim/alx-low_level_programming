#include "main.h"

/**
 * factorial - Returns factorial of a given number.
 * @n: Argument to calculate factorial of.
 *
 * Return: Factorial of @n.
 *	   -1 if n is less than 0.
 */
int factorial(int n)
{
	int i;

	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	i = n * factorial(n - 1);
	return (i);
}
