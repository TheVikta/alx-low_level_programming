#include "main.h"

/**
 * _strcmp - Compares two strings s1 and s2
 * @s1: pointer to s1
 * @s2: pointer to s2
 *
 * Return: int value if s1==s2 || s1 < s2 || S1 > s2
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
