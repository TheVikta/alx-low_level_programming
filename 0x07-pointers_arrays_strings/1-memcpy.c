#include "main.h"

/**
 * _memcpy - copy n bytes from memory area
 * src to memory area dest and returns pointer to dst
 * @dest: where to copy n bytes to
 * @src: where to copy n bytes from
 * @n: number of bytes to copy
 * Return: null
 */
char *_memcpy(char *dest, char *src, unsigned int n);

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int pos;
	char *copy_dest = dest;
	const char *copy_source = src;

	for (pos = 0; pos < n; pos++)
		copy_dest[pos] = copy_source[pos];

	return (copy_dest);
}
