#include "main.h"

/**
 * puts_half - Prints half of a string & newline
 * @str: string arg
 */
void puts_half(char *str)
{
	int i = 0, n, len = 0;

	while (str[i++])
		len++;
	if (len % 2 == 0)
		n = len / 2;
	else
		n = (len - 1) / 2;
	for (i = n; i < len; i++)
		_putchar(str[i]);
	_putchar('\n');
}
