#include <stdio.h>

/**
 * main - Entru point to the program
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
		if ((ch != 101 && (ch != 113))
		{
			putchar(ch);
			ch++;
			i++;
		}
		else
		{
			ch++;
			i++;
		}
	}
	puchar(10);
	return (0);
}

