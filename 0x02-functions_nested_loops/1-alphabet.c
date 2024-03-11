#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - prints lowercase alphabet
 *
 * Return: void
 */

void print_alphabet(void)
{
	char s = 'a';

	while (s >= 'a' && s <= 'z')
	{
		_putchar(s);
		s++;
	}
	_putchar('\n');
}
