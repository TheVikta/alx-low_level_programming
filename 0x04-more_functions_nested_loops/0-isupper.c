#include "main.h"

/**
 * _isupper - checks for uppercase char.
 * @c: int arg
 * Return: 1 if uppercase, 0 o'wise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
