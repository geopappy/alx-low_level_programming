#include "main.h"

/**
 * print_sign - print sign of number
 *
 * @n: number to check for its sign
 *
 * Return: 1 if n > 0, 0 if n == 0, -1 if n < 0
 *
 */

int print_sign(int n)
{
	switch (n)
	{
		case (n > 0):
			return (1);
		case (n < 0):
			return (-1);
		default:
			return (0);
	}
}
