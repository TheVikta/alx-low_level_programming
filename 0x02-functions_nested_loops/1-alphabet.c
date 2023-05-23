#include "main.h"

/**
 * print_alphabet - prints alphabet in reverse order
 *
 * Return: void
 */
void print_alphabet(void);
void print_alphabet(void)
{
	int i = 'a';

	while (i <= 'z')
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
