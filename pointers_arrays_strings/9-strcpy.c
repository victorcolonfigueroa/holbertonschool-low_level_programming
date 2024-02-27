#include "main.h"

/**
 * _strcpy- copy the contets form one var
 * @dest: this is destiny
 * @src: this is the copy
 *
 * Return: this is return copy
 */
char *_strcpy(char *dest, char *src)
{
	char *start = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (start);
}
