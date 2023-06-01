#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: string parameter destination to copy to
 * @src: string parameter source to copy from
 * @n: int arg - bytes to copy from source to destination
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int pos = 0, len_s = 0;

	while (src[pos++])
		len_s++;

	for (pos = 0; src[pos] && pos < n; pos++)
		dest[pos] = src[pos];

	for (pos = len_s; pos < n; pos++)
		dest[pos] = '\0';

	return (dest);
}
