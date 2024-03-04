#include <stdio.h>
#include "main.h"

/**
 * factorial- gets factorial of n
 * @r: integer
 *
 * Return: On success 1.
 * On error, -1 is returned, adn error is set approprately.
 */
int factorial(int r)
{
	if (r < 0)
		return (-1);
	if (r == 0)
		return (1);
	return (r * factorial(r - 1));
}
