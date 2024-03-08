#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point
 *
 * Return: 1 (Error)
 */


int main(void)
{
	const char * errorMsg = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	write(2,errorMsg, strlen(errorMsg));
	return (1);

}
