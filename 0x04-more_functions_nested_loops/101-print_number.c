#include "main.h"
#include <stdio.h>
/**
 * print_number - prints int with _putchar
 * @n: takes number, hello
 *
 * Return: void
 */

void print_number(int n)
{
unsigned int co;

if (n < 0)
{
_putchar('-');
co = -n;
}
else
{
co = n;
}
if (co / 10 != 0)
print_number(co / 10);
_putchar((co % 10) + '0');
}
