#include <studio.h>
#include <unistd.h>

/**
 * main - prints exaxctly "and that piee of art is useful
 * - Dora Korpar, 2015-10-19"
 * followed by a new line, to the standard error.
 * Return: Always 0 (success)
 */
int main(void)
{
	write(2,"and that piece of art is useful\" Dora Korpar, @015-10-19\n", 59);
	return (1);
}
