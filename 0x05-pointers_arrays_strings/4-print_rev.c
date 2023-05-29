#include "main.h"
#include <stdio.h>

/**
 * print_rev - prints string in reverse
 * @s: the string parameter
 * Return: null
 */
int _strlen(char* str);

int _strlen(char *str)
{
	int len;

	while (*str != '\0')
	{
		len++;
		str++;
	}
	return (len);
}

void print_rev(char *s)
{
	int i;
	int _len = _strlen(s);

	for (i = _len - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
