#include <stdio.h>

/**
 * main - Entry point to the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	int ch;

	ch = 122;
	i = 26;
	while (i > 0)
	{										putchar(ch);
		 ch--;
		 i--;								}
	putchar(10);
	return (0);
}
