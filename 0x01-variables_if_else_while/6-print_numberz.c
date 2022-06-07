#include <stdio.h>
/**
 * main - program to print all single digit numbers of base 10
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i = 0;

	for (i = 0; i < 10; i++)
		putchar((i % 10) + '0');

	putchar('\n');
	return (0);
}
