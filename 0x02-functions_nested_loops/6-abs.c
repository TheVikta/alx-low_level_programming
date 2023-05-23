#include "main.h"

/**
 * _abs - computes absolute value of integer
 * @int: arg of type int
 * Return: abs value of int arg
 */
int _abs(int);
int _abs(int i)
{
	if (i < 0)
		return (-i);
	else
		return (i);
}
