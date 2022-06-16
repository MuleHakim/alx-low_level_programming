#include "main.h"

/**
 * leet - Write a function that encodes a string into 1337
 *
 * @changed: This is the input string
 *
 * Return: String converted to 1337
 */

char *leet(char *s)
{
	int index, j;
	char minus[] = {'a', 'e', 'o', 't', 'l', '\0'};
	char mayus[] = {'A', 'E', 'O', 'T', 'L', '\0'};
	char numbers[] = {'4', '3', '0', '7', '1', '\0'};

	for (index = 0; s[index] != '\0'; ++index)
	{
		for (j = 0; j < 5; j++)
		{
			if (s[index] == minus[j] || s[index] == mayus[j])
			{
				s[index] = numbers[j];
			}
		}
	}
	return (s);
}
