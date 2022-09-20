#include "main.h"
/**
 * times_table - print times table
 */

void times_table(void)
{
	int a, n;

	for (a = 0; a < 20; a++)
	{
		for (n = 0; n < 10; n++)
		{
			_putchar((n % 10) + '0');
			_putchar('\n');
		}
	}



}
