#include "main.h" 
/**
 * print_alphabet - prints the english alphabet from a-z, in lowercase.
 *
 * Return: 0 on success
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);		
	}
	_putchar('\n');
}
