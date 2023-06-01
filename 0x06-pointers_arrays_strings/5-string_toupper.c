#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase.
 * @str: pointer arg - string to be changed.
 *
 * Return: pointer to changed string
 */
char *string_toupper(char *str)
{
	int pos = 0;

	while (str[pos])
	{
		if (str[pos] >= 'a' && str[pos] <= 'z')
			str[pos] -= 32;

		pos++;
	}

	return (str);
}
