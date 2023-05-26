#include "main.h"

/**
 * print_diagonal - draws diagonal line on terminal
 * @n: int arg
 *
 * Return: null
 */
void print_diagonal(int n)
{
	int l, d;

	if (n > 0)
	{
		for (l = 0; l < n; l++)
		{
			for (d = 0; d < l; d++)
				_putchar(' ');
			_putchar('\\');

			if (l == n - 1)
				continue;

			_putchar('\n');
		}
	}

	_putchar('\n');
}
