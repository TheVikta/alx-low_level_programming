#include "main.h"

/**
 * print_last_digit - prints last digit of num
 *
 * @n: int arg
 * Return: last digit value
 */
int print_last_digit(int n)
{
	int lastDigit = n % 10;

	if (lastDigit < 0)
	{
		lastDigit *= -1;
	}
	_putchar('0' + lastDigit);

	return (lastDigit);
}
