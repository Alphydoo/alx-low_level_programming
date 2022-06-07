#include "main.h"
/**
 * _islower - function that checks for lowercase character.
 * @c: character to test.
 * Return: 1 for lowercase character or  0 for anything.
 */
int _islower(int c)
{
	if  (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else

		return (0);
}
