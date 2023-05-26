#include "main.h"

/**
 * print_numbers - prints all numbers between 0 and 9
 *
 * Return: null
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
		_putchar((i % 10) + '0');

	_putchar('\n');
}
