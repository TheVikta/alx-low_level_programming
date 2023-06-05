#include "main.h"

/**
 * _strstr - locates a needle in a haystack
 * @haystack: pointer to string to be searched
 * @needle: substring to search for
 * Return: null
 */
char *_strstr(char *haystack, char *needle)
{
	int pos;

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		pos = 0;

		if (haystack[pos] == needle[pos])
		{
			do {
				if (needle[pos + 1] == '\0')
					return (haystack);

				pos++;

			} while (haystack[pos] == needle[pos]);
		}

		haystack++;
	}

	return ('\0');
}
