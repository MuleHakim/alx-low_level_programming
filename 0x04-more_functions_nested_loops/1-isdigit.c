#include <stdio.h>
#include "main.h"

/**
 * _isdigit - function that check if it's a digit
 * @c: takes in a character/digit
 * Return: 1 if digit and 0 if anything else
 */

int _isdigit(int c)
{
	char i = '0';
	int isdigit = 0;

	for (; i <= '9'; i++)
	{
		if (i == c)
		{
			isdigit = 1;
			break;
		}
	}

	return (isdigit);
}
