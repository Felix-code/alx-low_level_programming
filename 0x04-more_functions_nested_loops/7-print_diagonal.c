#include "main.h"
/**
 * print_diagonal- print diagonal line
 * @n: number of times diagonal line should be printed
 */

void print_diagonal(int n)
{
	int diag, space;

	if (n >  0)
	{
		for (diag = 0; diag < n; diag++)
		{
			for (space = 0; space < diag; space++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
		_putchar('\n');

}
