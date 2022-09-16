#include "main.h"
/**
 * print_alphabet_x10 - function that prints alphabet in lowercase
 *
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{
	int num = 0;

	while (num < 10)
	{
		char alpha = 'a';

		while (alpha <= 'z')
		{
			_putchar(alpha);
			alpha++;
		}


	_putchar('\n');
	num++;

	}

}
