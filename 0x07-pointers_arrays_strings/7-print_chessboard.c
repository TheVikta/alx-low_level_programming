#include "main.h"

/**
 * print_chessboard - prints chessboard
 * @a: char pointer
 * Return: null
 */
void print_chessboard(char (*a)[8])
{
	int pos_1, pos_2;

	for (pos_1 = 0; a[pos_1][7]; pos_1++)
	{
		for (pos_2 = 0; pos_2 < 8; pos_2++)
			_putchar(a[pos_1][pos_2]);

		_putchar('\n');
	}
}

