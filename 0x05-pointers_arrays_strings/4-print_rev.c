#include "main.h"
/*
 * print_rev - prints reversed string, followed by a new line
 * @s: pointer to the string to print
 * Return: void
*/

void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	for (c = 1; c >= 0; c--)
	{
		_putchar(s[i]);
	}
	_putchar('\n')
}
