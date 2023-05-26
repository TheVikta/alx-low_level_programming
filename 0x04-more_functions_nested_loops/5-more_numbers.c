#include "main.h"

/**
 * more_numbers - prints times 10, numbers 1 to 14
 *
 * Return: null
 */
void more_numbers(void)
{
	int i, counter;

	for (counter = 0; counter <= 9; counter++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i > 9)
				_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
		}
		_putchar('\n');
	}
}
