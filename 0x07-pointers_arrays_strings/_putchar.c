#include <unistd.h>
#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: character to print
 * @c: character to print
 * On error, -1 is returned, and errno is set appropriately.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

