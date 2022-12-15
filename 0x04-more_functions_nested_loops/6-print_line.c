#include "main.h"

/**
 * print_line - draws a strait line n the terminal
 * @n: numbers of time the character _  should be printed
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('_');
	} else
	{
		int i;

		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}

}
