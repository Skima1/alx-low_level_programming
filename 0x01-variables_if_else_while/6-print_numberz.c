#include <stdio.h>

/**
 * main - prints all single digit numbers of base 10nstarting from 0,
 * followed by a new line, using putchar
 * Return: Alwyas 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
