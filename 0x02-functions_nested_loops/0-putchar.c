#include "main.h"
/**
 * _putchar - a program that prints " _putchar" from character array.
 *
 * Return: 0 on success
 */
int main(void)
{
	char c[] = "main";
	int i;

	for (i = 0; i < 9; i++)
	{
		_putchar(c[i]);
	}
	_putchar('\n');

	return (0);
}
