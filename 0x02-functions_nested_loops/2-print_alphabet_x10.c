#include <stdio.h>
#include "main.h"
/**
 * main - a functions that prints 10 times the alphabet.
 *
 * Return: x10 a-z
 */
int main(void)
{
	int n, co;

	co = 0;

	while (co < 10)
	{
		for (n = 'a'; n <= 'z'; n++)
		{
			_putchar(n);
		}

		 _putchar('\n');
		co++;
	}
	return (0);
}
