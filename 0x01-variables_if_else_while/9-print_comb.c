#include <stdio.h>
/**
 * main - a program that prints all possible combinations of single-digit
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int i = 0;

	for (i = 0; i < 10; i++)
	{
		putchar((i % 10) + '0');
		if (i == 9)
			continue;

		putchar(44);
		putchar(' ');
	}
		putchar('\n');

	return (0);
}
