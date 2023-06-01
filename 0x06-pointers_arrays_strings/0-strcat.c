#include "main.h"

/**
 * strcat - Concatenates two strings
 * @dest: pointer parameter destination string
 * @src: pointer parameter - source string
 *
 * Return: pointer to the resulting string @dest.
 */
char *_strcat(char *dest, const char *src)
{
	int pos = 0, dest_len = 0;

	while (dest[pos++])
		dest_len++;

	for (pos = 0; src[pos]; pos++)
		dest[dest_len++] = src[pos];

	return (dest);
}
