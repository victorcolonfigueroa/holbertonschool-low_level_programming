#include <stdio.h>
#include "main.h"

/**
 * print_sign- prints_sings
 * print_signs: prints signs of the number
 * @n: the number to be chekced
 *
 * Return: 1 for positive, -1 for negative or 0 for anything else
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
