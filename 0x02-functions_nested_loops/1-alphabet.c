#include "main.h"

/**
 * print_alphabet - program to  print alphabet a-z in lowercase
 * followed by newline
 */


void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
	}
	_putchar('\n');
}
