#include "main.h"
/**
 * print_last_digit - prints the last digit of a number.
 * @n: digit to find the last place of.
 * Return: The last digit.
 */
int print_last_digit(int nld)
{
	int pld;

	pld = (nld % 10);
	{
		pld = (-1 * pld);
	}

	_putchar(pld + '0');
	return (pld);
}
