#include <stdio.h>
/**
 * main - print alphabet in lowercase then uppercase
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
	for (alpha = 65; alpha <= 90; alpha++)
	{
		putchar(alpha);
	}
	putchar('\n');
	return (0);
}
