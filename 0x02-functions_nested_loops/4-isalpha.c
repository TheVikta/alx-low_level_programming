#include "main.h"

/**
 * _isalpha - checks if a char is an alphabet
 *
 * Return: 1 if char is alpha, 0 o'wise
 * @c: char arg to be checked
 */
int _isalpha(int c);
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
