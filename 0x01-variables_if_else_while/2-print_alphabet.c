#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	int ch;

	ch = 97;
	i = 0;
	while (i < 26)
	{
		putchar(ch);
		ch++;
		i++;
															    }
	putchar(10);
	return (0);
}
