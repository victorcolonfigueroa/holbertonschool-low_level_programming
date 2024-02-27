#include "main.h"

/**
 * puts2- prints one char out of 2 of a string
 * followed by a new line
 * @s: string to print the char from
 */
void puts2(char *s)
{
	int a;

	for (a = 0; s[a] != '\0'; a++)
	{
		if (a % 2 == 0)
		{
			_putchar(s[a]);
		}
	}
	_putchar('\n');
}
