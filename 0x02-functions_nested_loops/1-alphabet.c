#include "main.h"
/**
 * main - funtion to print alphabet using putchar
 *
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
		_putchar(alpha);
	_putchar('\n');
}
