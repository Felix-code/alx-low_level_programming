#include <stdio.h>
#include "main.h"
#include <ctype.h>
/**
 * _islower - Check for lowercase characters
 * @c - letter to be checked
 *
 * Return: 1 if letter is lowercase and 0 if otherwise
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);

}
