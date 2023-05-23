#include "main.h"

/**
 * _islower - returns 1 if char is lowercase o'wise returns 0
 * @c: char to check
 *
 * Return: 1 if char is lowercase 0 if o'wise
 */
int _islower(int c);
int _islower(int c)
{

	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
