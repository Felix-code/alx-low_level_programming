#include <stdio.h>

/**
 * main - print alpha in lower case
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alpha;

	for (alpha = 97; alpha <= 122; alpha++)
	{
		putchar(alpha);
	}
		putchar('\n');
	return (0);
}
