#include "main.h"
/**
 * main - a program that prints " _putchar" from character array.
 *
 * Return: 0 on success
 */
int main(void)
{
	char c[] = "main";
	int i;

	for (i = 0; i < 9; i++)
	{
		putchar(c[i]);
	}
	putchar('\n');

	return (0);
}
