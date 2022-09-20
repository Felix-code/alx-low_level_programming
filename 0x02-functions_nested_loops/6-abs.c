#include "main.h"
#include <stdlib.h>
/**
 * _abs - function that prints the absolute value of an integer
 * @n: is the integer to be checked
 *
 * Return: the absolute value of an integer
 */

int _abs(int n)
{
	if (n >= 0)
		return (n);
	else
		return (-n);

}