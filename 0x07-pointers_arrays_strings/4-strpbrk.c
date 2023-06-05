#include "main.h"

/**
 * _strpbrk - search a string for any of a set of bytes
 * @s: pointer to string to be searched
 * @accept: pointer to string to be matched
 * Return: null
 */
char *_strpbrk(char *s, char *accept)
{
	int pos;

	while (*s)
	{
		for (pos = 0; accept[pos]; pos++)
		{
			if (*s == accept[pos])
				return (s);
		}

		s++;
	}

	return ('\0');
}
