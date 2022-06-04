#include <stdio.h>

/**
 * main -Entry point to the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	char ch;

	i = 0;
	ch = 97;
	while (i < 16)
	{
		if (i > 9)
		{
			putchar(ch);
			ch++;
			i++;						       }
		else
		{
			putchar(i + '0');
			i++;						       }
	}
	putchar(10);
        return (0);
}
