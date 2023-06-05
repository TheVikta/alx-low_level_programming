#include "main.h"

/**
 * _strchr - returns to the first occurence of the char c
 * in the string s
 * @s: pointer to string
 * @c: character to look for in string
 * Return: null
 */
char *_strchr(char *s, char c)
{
	int pos;

	for (pos = 0; s[pos] >= '\0'; pos++)
	{
		if (s[pos] == c)
			return (s + pos);
	}

	return ('\0');
}
