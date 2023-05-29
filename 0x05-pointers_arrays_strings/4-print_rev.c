#include "main.h"

/**
 * print_rev - prints string in reverse
 * @s: the string parameter
 * Return: null
 */
void print_rev(char *s);

void print_rev(char *s)
{
	int i = 0;
	int len = 0;
	int last;

	while (s[i++])
	{
		len++;
	}
	for (last = len - 1; last >= 0; last--)
	{
		_putchar(s[last]);
	}
	_putchar('\n');
}
