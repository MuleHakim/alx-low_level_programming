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

	ch = 97;
	i = 0;
	while (i<26)
	{
		putchar(ch);
		ch++;
		i++;
	}
	i = 0;
	ch = 65;
	while (i<26)
	{
		putchar(ch);
		ch++;
		i++;
	}
	putchar(10);
	return (0);
}
