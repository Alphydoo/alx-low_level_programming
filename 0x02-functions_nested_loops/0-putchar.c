#include "main.h"
/**
 * main - Entry point
 *
 * Return: 0 on success
 */
int main(void)
{
	char *sh = "main";

	while (*sh)
	{
		_putchar(*sh);
		sh++;
	}
	_putchar('\n');

	return (0);
}
