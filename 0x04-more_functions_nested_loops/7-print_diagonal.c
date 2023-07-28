#include "main.h"

/**
 * print_diagonal - print a diagonal line
 *
 * @n: the number of times the \ character should be printed
 */
void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	int spaces;

	for (int i = 0; i < n; i++)
	{
		spaces = i;
		while (spaces > 0)
		{
			_putchar(' ');
			spaces--;
		}
		_putchar('\\');
		_putchar('\n');
	}
}
