#include <stdio.h>

/**
 * main prints all single digit numbers of base 10 starting from 0,
 * followed by a new line.
 * Description: using the main function
 * this program prints 'Programming is positve, zero, or negative
 * Return: 0
 */
int main(void)
{
	int n;
	
	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
