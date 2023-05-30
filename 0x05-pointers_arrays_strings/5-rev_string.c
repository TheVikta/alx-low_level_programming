#include "main.h"
#include <stdio.h>
/**
 * rev_string - reverses a string
 * @s: char pointer as parameter
 * Return: null
 */
void rev_string(char *s)
{
	int i = 0, j, len = 0;
	char temp;

	while (s[i++])
	{
		len++;
	}

	for (j = 0; j < (len / 2); j++)
	{
		temp = s[j];
		s[j] = s[len - j - 1];
		s[len - j - 1] = temp;
	}
}
