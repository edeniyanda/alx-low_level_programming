#include <stdio.h>
/**
 * main - prints the alphabet in lowercase, followed by a new line, except q &e
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch;

	while (ch <= 'z')
	{
		if (ch != 'e' && ch != 'q')
		{
			putchar(ch);
		}
		ch++;
	}
	putchar('\n');
	return (0);
}
