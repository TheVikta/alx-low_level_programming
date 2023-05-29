#include "main.h"

/**
 * _strlen - returns legnth of string parameter
 * @s: string parameter
 * Return: int - length of string
 */
int _strlen(char *s);

int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
