#include "main.h"

/**
 * puts_half - Prints half of a string & newline
 * @str: string arg
 */
void puts_half(char *str)
{
	int i = 0, j, len = 0;

	while (str[i++])
		len++;
	j = len / 2;
	if (len % 2 != 0)
		j = (len - 1) / 2;
	for (i = j; i < len; i++)
		_putchar(str[i]);
	_putchar('\n');
}
