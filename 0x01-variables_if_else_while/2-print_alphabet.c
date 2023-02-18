#include <stdio.h>

/**
 * main -  Entry point
 * Description: Program to print alphabet in lowercase 'a-z'
 * Return: 0
 */

int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
