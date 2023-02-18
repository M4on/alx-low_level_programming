#include <stdio.h>

/**
 * main - Entry block
 * Description: program to print lowercae and uppercase alphabet using putchar
 * Return: 0
 */

int main(void)
{
	char c = 'a';

	while (c <= 'a')
	{
		putchar(c);
		c++;
		c = 'A';
		while (c <= 'A')
		{
			putchar(c);
			c++;
		}
		putchar('\n');
		return (0);
	}
}

