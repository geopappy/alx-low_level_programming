#include <stdio.h>
#include "main.h"
/**
 * print_alphabet_x10 - prints lowercase alphabet × 10
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	char s;
	int i;

	for (i = 0; i < 10; i++)
	{
		s = 'a';
		while (s >= 'a' && s <= 'z')
		{
			_putchar(s);
			s++;
		}
		_putchar('\n');
	}

}
