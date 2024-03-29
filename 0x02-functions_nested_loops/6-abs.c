#include "main.h"

/**
 * _abs - Computes absolute value of interger
 *
 * @n: number to compute it absolute value
 *
 * Return: The absolute value
 *
 */

int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	else
	{
		return (n);
	}
}
