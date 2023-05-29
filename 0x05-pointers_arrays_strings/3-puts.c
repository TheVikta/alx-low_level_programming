#include "main.h"

/**
 * _puts - similar to puts in main()
 * @str: string arg
 * Return: null
 */
void _puts(char *str)
{
	int i;

	while (*str != '\0')
	{
		i = *str;
		_putchar(i);
		str++;
	}
	_putchar('\n');
}
