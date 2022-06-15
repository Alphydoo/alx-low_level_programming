#include "main.h"

/**
 * _strncat - a function that concatenates two strings
 * @dest: copy to
 * @src: copy from
 * @n: input of max bytes to be used
 * Return: Always 0 (Success)
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, xo;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}

	for (xo = 0; co < n; xo++)
	{
		dest[i + xo] = src[xo];
		if (src[xo] == '\0')
			xo = n;
	}

	return (dest);
}
