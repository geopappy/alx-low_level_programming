#include <stdio.h>
#include "main.h"
/**
 * _islower - checks for alphabetic character
 *@c : character to check.
 * Return: 1 if c is an alphabet, 0 otherwise
 */

int _isalpha(int c)
{

	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
