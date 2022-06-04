#include <stdio.h>
/**
 * main - Entry point to the program
 *
 *  Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	i = 0;
	while (i < 10)
	{
		putchar(i + '0');
		if (i < 9)
		{
			putchar(44);
			putchar(32);
		}
		i++;
	}
	putchar(10);
	return (0);
}
