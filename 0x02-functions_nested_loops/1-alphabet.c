#include "main.h"

/**
 * main - prints alphabet, in lowercase, followed by a new line.
 *
 * Return o
 */
void print_alphabet(void);
{
	char c;

	for (c = 'a'; c <= 'z'; c++);
	{
		_putchar(c);
	}
	_putchar('\n');
}
