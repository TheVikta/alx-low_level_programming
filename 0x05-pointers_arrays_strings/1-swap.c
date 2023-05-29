#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: first int parameter
 * @b: second int parameter
 * Return: null
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
