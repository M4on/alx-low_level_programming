#include <stdio.h>

/**
 * main - Entry point
 * Description: Program to print single numbers of base 10,
 * followed by a newline.
 * Return: 0
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');

	putchar('\n');

	return (0);
}
