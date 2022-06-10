#include "main.h"
/**
 * print-triangle - a function that prints a triangle
 * @size: size of the triangle
 * Return: void
 */
void print_triangle(int size)
{
	int sp, ro;

	if (size > 0)
	{
		for (sp = 0; sp < size; sp++)
		{
			for (ro = 0; ro < size; ro++)
			{
				if ((size - i - 1) > ro)
					_putchar(' ');
				else
					_putchar('#');
			}
			_putchar('\n');
		}
		else
			_putchar('\n');
	}

}
