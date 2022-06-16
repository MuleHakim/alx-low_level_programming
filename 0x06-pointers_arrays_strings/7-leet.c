#include "main.h"
/**
 * leet - encodes a string into 1337.
 * letters a and A are replaced by 4.
 * Letters e and E are replaced by 3
 * Letters o and O are replaced by 0
 * Letters t and T are replaced by 7
 * Letters l and L are replaced by 1
 * @s: pointer to string.
 * 
 * Return: pointer to s.
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
