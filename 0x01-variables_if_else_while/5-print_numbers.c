#include <stdio.h>

/**
 * main - Entry point
 * Description: Program to print single numbers of base 10,
 * followed by  anewline.
 * Return: 0
 */

int main(void)
{
	char c = '0';

	while (c <= '9')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
