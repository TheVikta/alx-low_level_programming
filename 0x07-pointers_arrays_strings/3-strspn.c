#include "main.h"

/**
 * _strspn - calculates the length in bytes of the initial
 * segment of s consisting entirely of bytes in accept
 * @s: pointer to substring
 * @accept: char pointer
 * Return: number of bytes in the initial segment of s
 * which consists only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int nu_bytes = 0;
	int pos;

	while (*s)
	{
		for (pos = 0; accept[pos]; pos++)
		{
			if (*s == accept[pos])
			{
				nu_bytes++;
				break;
			}

			else if (accept[pos + 1] == '\0')
				return (nu_bytes);
		}

		s++;
	}

	return (nu_bytes);
}
