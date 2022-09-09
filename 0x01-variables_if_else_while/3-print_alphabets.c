#include <stdio.h>
/**
 * main - program that prints alphabets in lowercase and uppercase
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alpha, ALPHA;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		putchar(alpha);
	}

	for (ALPHA = 'A'; ALPHA <= 'Z'; ALPHA++)
	{
		putchar(ALPHA);
	}
	putchar('\n');

	return (0);
}
