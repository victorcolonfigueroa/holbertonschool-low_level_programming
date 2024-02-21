#include <stdio.h>
#include "main.h"

/**
*_islower - Check for lowercase character
*@c: The character to be checked
*
*Return: 0
*/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}

