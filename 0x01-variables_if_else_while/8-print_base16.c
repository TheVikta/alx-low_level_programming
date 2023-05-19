#include <stdio.h>

/**
 * main - Entry point
 *
 *
 * Return: Always 0
 */
int main(void)
{
	int j = 97, i = 48;

	while (i <= 57)
	{
		putchar(i);
		i++;
	}
	while (j <= 102)
	{
		putchar(j);
		j++;
	}
	putchar('\n');

	return (0);
}
