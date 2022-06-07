#include <stdio.h>
/**
 * main - a program that prints alphabet in lower case except q and e
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		if (alpha == 'e')
			continue;
		if (alpha == 'q')
			continue;
		putchar(alpha);
	}
	putchar('\n');
	return (0);
}
