#include "main.h"

/**
 * print_most_numbers - prints the nums of the decimal sys except 2 & 4
 *
 * Return: void
 */
void print_most_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		if (i != '4' && i != '2')
			_putchar(i);
	}
	_putchar('\n');
}
