#include "main.h"

/**
 * _strncat - Concatenates two strings
 * @dest: destination string parameter
 * @src: source string parameter
 * @n: number of bytes from src to be appended to dest.
 *
 * Return: pointer to the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int pos = 0, dest_len = 0;

	while (dest[pos++])
		dest_len++;

	for (pos = 0; src[pos] && pos < n; pos++)
		dest[dest_len++] = src[pos];

	return (dest);
}
