#include "main.h"

/**
 * leet - Encodes a string into 1337.
 * @str: The string to be encoded.
 *
 * Return: A pointer to the encoded string.
 */
char *leet(char *str)
{
	int pos_1 = 0, pos_2;
	char leet[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};

	while (str[pos_1])
	{
		for (pos_2 = 0; pos_2 <= 7; pos_2++)
		{
			if (str[pos_1] == leet[pos_2] ||
			    str[pos_1] - 32 == leet[pos_2])
				str[pos_1] = pos_2 + '0';
		}

		pos_1++;
	}

	return (str);
}
