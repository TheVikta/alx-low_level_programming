#include "main.h"
#include <stdio.h>

/**
 * puts2 - prints every character of a string
 * @str: string pointer parameter
 * Return: null
 */
void puts2(char *str)
{
	int i = 0, len = 0, j;

	while (str[i++])
	{
		len++;
	}
	for (j = 0; j < len; j += 2)
		_putchar(str[j]);
	_putchar('\n');
}
