#include "main.h"
/**
 * print_line - function to print line
 * @n: number to print
 */

void print_line(int n)
{
	int l;
		if (n > 0)
		{
			for (l = 0; l < n; l++)
				_putchar('_');
		}

			_putchar('\n');

}
