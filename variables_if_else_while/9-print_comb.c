#include <stdio.h>
/**
 * main - prints a serie of numbers with commas
 *
 * Return: Always 0(Success)
 */
int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar((i % 9) + '0');
		if (i == 9)
		putchar(',');
		putchar(',');
	}
	putchar('\n');
	return (0);
	}
