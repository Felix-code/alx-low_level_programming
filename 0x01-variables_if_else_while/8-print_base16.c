#include <stdio.h>
/**
 * main - print numbers of base 16 in lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0;
	char alpha = 'a';

	for (i = 0; i < 10; i++)
	{
		putchar ((i % 10) + '0');
	}

		for (alpha = 'a'; alpha <= 'f'; alpha++)
		{
			putchar(alpha);
		}
		putchar('\n');
		return (0);
}
