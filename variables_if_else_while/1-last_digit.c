#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Prints a text according number
 *
 * Return: Always 0(Success)
 */
int main(void)
{
	int n, lastd;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if ((n % 10)  > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lastd);
	}
	else if ((n % 10) < 6 && (n % 10) != 0)
	{
		printf("Lastd digit of %d is %d and is less than 6 and not 0\n", n, n % 10);
	}
	else
	{
		printf("Last digit of %d is %d and is 0\n", n, n % 10);
	}

	return (0);
}
