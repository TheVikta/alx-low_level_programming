#include "main.h"

/**
 * _puts - similar to puts in main()
 * @str: string arg
 * Return: null
 */
int _putchar(char c);
void _puts(char *str)
{

	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
