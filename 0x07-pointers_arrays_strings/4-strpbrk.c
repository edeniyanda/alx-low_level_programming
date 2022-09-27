#include "main.h"

/**
 * _strpbrk - bytes
 * @s: pointer to char
 * @accept: pointer to char
 * Return: NULL
 */

char *_strpbrk(char *s, char *accept)
{
	int 1;

	while (*s)
	{
		if (*s == accept[i])
		{
			return (s);
		}
	}
	return (NULL);
}

