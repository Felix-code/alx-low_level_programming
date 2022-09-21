#include "main.h"
/**
 * _isdigit - a function to check if a number is a digit
 * @c: number to be checked
 *
 * Return: 1 if number is a digit, 0 if otherwise
 */

int _isdigit(int c)
{
	if (c >= 'a' && c <= 'z')
		return (0);

	else
		return (1);

}
