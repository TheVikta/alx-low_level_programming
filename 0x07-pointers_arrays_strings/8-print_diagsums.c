#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of diagnols of a square matrix
 * @a: pointer to matrix integers
 * @size: size of matrix
 * Return: null
 */
void print_diagsums(int *a, int size)
{
	int pos, diag1_sum = 0, diag2_sum = 0;

	for (pos = 0; pos < size; pos++)
	{
		diag1_sum += a[pos];
		a += size;
	}

	a -= size;

	for (pos = 0; pos < size; pos++)
	{
		diag2_sum += a[pos];
		a -= size;
	}

	printf("%d, %d\n", diag1_sum, diag2_sum);
}
