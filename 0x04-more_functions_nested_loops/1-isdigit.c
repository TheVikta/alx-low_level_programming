#include "main.h"

/**
 * _isdigit - checks whether char is digit
 * @c: the char to check
 * Return: 1 if digit, 0 o'wise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
