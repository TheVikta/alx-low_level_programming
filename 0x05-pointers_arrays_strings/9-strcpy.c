#include "main.h"

/**
 * _strcpy - Copies a string pointed to by @src, including the
 *           terminating null byte, to a buffer pointed to by @dest.
 * @dest: destination buffer
 * @src: source of string to be copied
 * Return: A pointer to the destination string @dest.
 */
char *_strcpy(char *dest, const char *src)
{
	int pos = -1;

	do {
		pos++;
		dest[pos] = src[pos];
	} while (src[pos] != '\0');

	return (dest);
}
