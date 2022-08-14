#include "main.h"

/**
 * _strchr - locates a character in a string.
 * @s: string s.
 * @c: string .
 * Return: new string
 */

char *_strchr(char *s, char c)
{
	while (*s != c)
	{
		if (!*s++)
		{
			return (0);
		}
	}
	return (s);
}
