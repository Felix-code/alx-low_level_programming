#include "main.h"
/**
 * print_alphabet_x10 - prints the alphabet in lowercase
 */
void print_alphabet_x10(void)
{
	char alpha;

		for (alpha = 'a'; alpha <= 'z'; alpha++)

			_putchar(alpha);
		_putchar('\n');
}

int main(void)
{
	print_alphabet_x10();

	return (0);
}
