#include "main.h"

int divis(int i, int j);

/**
 * divis - Checks if a number is divisible.
 * @i: The number to be checked.
 * @j: The divisor.
 *
 * Return: 0 if the number is divisible and 1 when otherwise.
 */
int divis(int i, int j)
{
	if (i % j == 0)
		return (1);

	if (j == i / 2)
		return (1);

	return (divis(i, j + 1));
}

/**
 * is_prime_number - Checks if a number is prime.
 * @n: The number to be checked.
 *
 * Return: 0 if @n is not prime.
 *         1 if @n is prime.
 */
int is_prime_number(int n)
{
	int j = 2;

	if (n <= 1)
		return (0);

	if (n >= 2 && n <= 3)
		return (1);

	return (divis(n, j));
}
