#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	long prime = 612852475143, cdiv;

	while (cdiv < (prime / 2))
	{
		if ((prime % 2) == 0)
		{
			prime /= 2;
			continue;
		}

		for (cdiv = 3; cdiv < (prime / 2); cdiv += 2)
		{
			if ((prime % cdiv) == 0)
				prime /= cdiv;
		}
	}

	printf("%ld\n", prime);

	return (0);
}
