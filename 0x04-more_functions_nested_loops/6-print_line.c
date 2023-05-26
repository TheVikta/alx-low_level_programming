#include "main.h"

/**
 * print_line - draws straight line in terminal
 * @n: the integer arg
 *
 * Return: null
 */
void print_line(int n)
{
	int len;

	if (n > 0)
	{
		for (len = 0; len < n; len++)
			_putchar('_');
	}

	_putchar('\n');
}
