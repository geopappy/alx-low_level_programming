#include <stdio.h>

/**
* main - Entry point
*
* Return: 0
*/

int main(void)
{
	char character;

	for (character = 'a'; character <= 'z'; character++)
	{
		if (character == 'q' || character == 'e')
			continue;
		putchar(character);
	}

	putchar('\n');

	return (0);

}
