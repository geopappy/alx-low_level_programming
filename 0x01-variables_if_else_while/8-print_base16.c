#include <stdlib.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int hex = 0;

	while (hex < 10)
	{
		putchar(hex + '0');
		hex++;
	}

	hex = 'a';

	while (hex >= 'a' && hex <= 'f')
	{
		putchar(hex);
		hex++;
	}
	putchar('\n');
	return (0);
}
