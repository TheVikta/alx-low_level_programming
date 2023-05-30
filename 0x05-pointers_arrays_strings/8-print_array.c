#include "main.h"
#include <stdio.h>

/**
 * print_array - Prints n elements of arrat + newline
 * @a: arg 1
 * @n: arg 2 number of array elements
 */
void print_array(int *a, int n)
{
	int pos;

	for (pos = 0; pos < n; pos++)
	{
		printf("%d", a[pos]);

		if (pos == n - 1)
			continue;

		printf(", ");
	}

	printf("\n");
}
