#include "main.h"

/**
 * reverse_array - Reverses the content of an array of integers.
 * @a: int pointer -the array of integers to be reversed.
 * @n: int arg - the number of elements in the array.
 */
void reverse_array(int *a, int n)
{
	int var_1, pos;

	for (pos = n - 1; pos >= n / 2; pos--)
	{
		var_1 = a[n - 1 - pos];
		a[n - 1 - pos] = a[pos];
		a[pos] = var_1;
	}
}
