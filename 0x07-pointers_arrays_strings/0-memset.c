#include "main.h"

/**
 * _memset - fill memory with a constant byte
 * @s: pointer to buffer
 * @b: constant char to be written to buffer
 * @n: int the number of bytes to be written
 * Return: pointer to buffer s
 */
char *_memset(char *s, char b, unsigned int n);

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int pos;
	char *buffer = s, constant_byte = b;

	for (pos = 0; pos < n; pos++)
		buffer[pos] = constant_byte;

	return (buffer);
}
